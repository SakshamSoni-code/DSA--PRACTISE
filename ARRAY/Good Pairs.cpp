/*
Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

*/


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // using unordered map t.c->o(n) s.c->o(n)
        int ans=0;
        unordered_map<int,int> count;
        for(int a:nums)
        {
            ans+=count[a]++;
        }
        return ans;
        
        
        
        // efficinet t.c-> O(n) s.c->O(n)
       /* Count how many times each number appears. If a number appears n times, then n * (n – 1) // 2 good pairs can be made with this number. */
        
        /*array<int,101> arr{0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            int n=arr[i];
            ans+=n*(n-1)/2;
        }
        return ans; */
        
        
        // brute force   T.C-> O(n^2)
        /*
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
               if(nums[i]==nums[j]) count++;
            }
        }
        return count; */
    }
};