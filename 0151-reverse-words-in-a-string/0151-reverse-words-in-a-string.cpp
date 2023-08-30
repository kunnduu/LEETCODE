class Solution {
public:
    string reverseWords(string s) {
        string s1="";
        vector<string> v1;
    for(auto i : s){
        if(i!=' ')
        {
            s1+=i;
        }
        else
        {   if(s1!="")
        {
            v1.push_back(s1);
        }
            s1="";
        }
    }
    if(s1!="") v1.push_back(s1);
    s1="";
    for(int i=v1.size()-1;i>=0;i--)
    {
        s1+=v1[i];
        if(i!=0)
        {
            s1+=" ";
        }
    }
    return s1;
    }
};