class Solution {
public:
    bool minBananaPossible(vector<int>& piles,int h,int b){
        int hour=0;
        for(int i=0;i<piles.size();i++)
        {
                hour+=(piles[i]+b-1)/b;
        }
        if(hour<=h) return true;
        else return false;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(minBananaPossible(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};

