//leetcode 350

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // t.c-> O(n+m) 
        
        unordered_map<int,int> mp;
        for(int a:nums1) mp[a]++;
        
        vector<int> ans;
        
        for(int b:nums2){
            if(mp[b]-- > 0){
                ans.push_back(b);
            }
        }
        return ans;
        
        
        
        //t.c-> O(n+m)log(n+m) 
        /*vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])i++;
            else if(nums2[j]<nums1[i])j++;
            else{
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;  */
    }
};