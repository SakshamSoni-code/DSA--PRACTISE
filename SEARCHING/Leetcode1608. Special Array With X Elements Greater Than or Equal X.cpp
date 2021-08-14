class Solution {
public:
    int specialArray(vector<int>& nums){
       // couting sort t.c-> O(n)+O(max ele in nums[i])    s.c->o(max ele n nums[i])
       vector<int> count(1001);
        for(int num:nums){
            count[num]++;
        }
        
        for(int i=999;i>=0;i--)
        {
            count[i]+=count[i+1];
            if(count[i]==i) return i;
        }
        return -1;
   /* pair<bool,int> isValid(vector<int>& nums,int x){
        
        /* binary search-> o(nlogn)
        int cnt=0;
        for(int a:nums){
            if(a>=x) cnt++;
        }
        if(cnt==x) return make_pair(true,cnt);
        else return make_pair(false,cnt);
    }
    int specialArray(vector<int>& nums) {
        int low=1;
       // int high=*max_element(nums.begin(),nums.end());
        int high=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            
            pair<bool,int> p=isValid(nums,mid);
            if(p.first==true){
                return mid;
            }
            else{
                if(p.second>mid) low=mid+1;
                else high=mid-1;
            }
        }
        return -1; */
    }
};