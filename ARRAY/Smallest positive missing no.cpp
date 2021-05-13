/*
Given an unsorted integer array nums, find the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1

*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // t.c->O(n) s.c->O(1)
        int i = 0;
        int n = nums.size();
        while (i < n)
        {
            if (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i]-1]);
            else
                i++;
        }
        for (i = 0; i < n; ++i)
            if (nums[i] != (i+1))
                return i+1;
        return n+1;

    
        /*         // t.c->O(n) s.c->O(1)

        int n=nums.size();
         for(int i=0;i<n;i++)
         {
             while(nums[i]>=1 && nums[i]<=n && nums[i]!=nums[nums[i]-1])
                 swap(nums[i],nums[nums[i]-1]);
         }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1; */
        
    }
};