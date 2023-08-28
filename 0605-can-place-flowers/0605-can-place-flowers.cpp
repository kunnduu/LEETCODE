class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int j=0;
        if(n==0)
        {
            return true;
        }
        if(flowerbed.size()==1)
        {
            if(flowerbed[j]==0 && n==1)
            {
                return true;
            }
            return false;
        }
    while(j<flowerbed.size())
    {   
        if(n==0)
        {
            return true;
        }
        else if(j==0 && flowerbed[j]==0 && flowerbed[j+1]!=1)
        {
            n-=1;
            flowerbed[j]=1;
            j+=2;
        }
        else if(j==0 && flowerbed[j]==0 && flowerbed[j+1]==1)
        {
            j+=1;
        }
        else if(j==flowerbed.size()-1 && flowerbed[j]==0 && flowerbed[j-1]!=1)
        {
             n-=1;
            flowerbed[j]=1;
            j+=2;
        }
        else if(j==flowerbed.size()-1 && flowerbed[j]==0 && flowerbed[j-1]==1)
        {
            
            j+=1;
        }
        else if(flowerbed[j]==0 && flowerbed[j-1]==1)
        {
            
            j+=1;
        }
        else if(flowerbed[j]==0 && flowerbed[j+1]==1 )
        {
            
            j+=1;
        }
        else if(flowerbed[j]==0 && flowerbed[j+1]==0 && flowerbed[j-1]==0)
        {   
            flowerbed[j]=1;
            j+=2;
            n-=1;
            

        }
        else if(flowerbed[j]==1)
        {
            j+=1;
        }
    }
    if(n==0)
    {
        return true;
    }
    return false;
    }
};