class Solution {
public:
    string reverseVowels(string s1) {
        int st=0;
        string s="";
        for(int i=0;i<s1.length();i++)
		  {  s+=tolower(s1[i]);
          }
         
       int e=s1.length()-1;
       while(st<e)
       {
           if((s[st] == 'a' || s[st] == 'e' || s[st] == 'i' || s[st] == 'o' || s[st] == 'u') && (s[e] == 'a' || s[e] == 'e' || s[e] == 'i' || s[e] == 'o' || s[e] == 'u'))
           {
               swap(s1[st],s1[e]);
               st++;
               e--;
           }
           else if(s[st] != 'a' && s[st] != 'e' && s[st] != 'i' && s[st] != 'o' && s[st] != 'u')
           {
               st++;
           }
           else if(s[e] != 'a' && s[e] != 'e' && s[e] != 'i' && s[e] != 'o' && s[e] != 'u')
           {
               e--;
           }
        
    }
    return s1;
    }
};