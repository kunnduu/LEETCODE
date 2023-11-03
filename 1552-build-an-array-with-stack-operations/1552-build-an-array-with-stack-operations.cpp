class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
      vector<int> v;
      vector<string> s;
      int j=0;
      for(int i=1;i<=n;i++)
      {
          if(v==target)
          {
              break;
          }
          else
          {
              if(target[j]==i)
              {
                  s.push_back("Push");
                  v.push_back(i);
                  j++;
              }
              else
              {
                  s.push_back("Push");
                  s.push_back("Pop");
              }
          }
      }
      return s;  
    }
};