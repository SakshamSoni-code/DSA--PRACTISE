class Solution {
public:
    // t.c-> o(log(sum of all elements)*n)
    bool isMinCapacityPossible(vector<int>& weights, int days,int capacity){
        int sum=0,d=1;
        
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]>capacity) return false;
            if(sum+weights[i]>capacity)
            {
                d++;
                if(d>days) return false;
                sum=weights[i];
            }
            else{
                sum+=weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=1,high=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isMinCapacityPossible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};