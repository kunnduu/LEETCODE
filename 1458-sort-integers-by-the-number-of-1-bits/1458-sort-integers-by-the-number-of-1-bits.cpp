class Solution {
public:
int countbits(int a)
{
  int count=0;
  while(a)
  {
    if(a&1)
    {
      count++;
    }
    a=a>>1;
  }
  return count;
}
  vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> c(32);
  
  for(int i : arr)
  {
    int j = countbits(i);
    c[j].push_back(i);
  }
 vector<int> ans;
  for(int i=0 ; i<32;i++)
  {
      auto v = c[i];
      sort(v.begin(),v.end());
      for(int j : v)
      {
        ans.push_back(j);
      }
  }
  return ans;
    }
};