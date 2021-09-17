class Solution {
public:
    // t.c-> O(log(sum-max)*n)  s.c->O(1)
    bool sumPossible(vector<int>& nums,int m,int sum){
        int subarray=1;
        int total=0;
        for(int x: nums){
            if(x>sum)return false;
            if(total+x<=sum){
                total+=x;
            }
            else{
                total=x;
                subarray++;
            }
        }
        return subarray<=m;
    }
    int splitArray(vector<int>& nums, int m) {
      int low=*max_element(nums.begin(),nums.end()), high=accumulate(nums.begin(),nums.end(),0);
      int ans=0;
        
       while(low<=high){
           int mid=low+(high-low)/2;
           
           if(sumPossible(nums,m,mid)){
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