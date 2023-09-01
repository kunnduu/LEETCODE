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
    vector<int> countBits(int n) {
        int a ;
        vector<int> v;
        for(int i = 0;i<=n;i++)
        {
            a = countbits(i);
            v.push_back(a);
        }
        return v;
    }
};