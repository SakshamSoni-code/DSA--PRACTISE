/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // t.c->O(logn) s.c->O(1)
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            
            if(nums[start]<=nums[mid]) // left half is sorted
            {
                if(target>=nums[start] && target<nums[mid]) end=mid-1; // remain in left half
                else start=mid+1; // move to right half
            }
            else// right half is sorted
            {
                if(target>nums[mid] && target<=nums[end]) start=mid+1; // remain in right half
                else end=mid-1; // move to left half
            }
        }
        return -1;
    }
};

