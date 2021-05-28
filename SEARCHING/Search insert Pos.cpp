/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1


*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // for explanation see notes
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
           int m=s+(e-s)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return e+1;
    }
};