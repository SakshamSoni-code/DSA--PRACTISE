/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
*/


class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,ans=-1;
        int n=nums.size();
        int end=n-1;
        while(start<=end)
        {
            if(nums[start]<nums[end])
            {
                return nums[start];
            }
            int mid=start+(end-start)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next])
            {
                ans=nums[mid];
                break;
            }
            if(nums[start]<=nums[mid])
            {
                start=mid+1;
            }
            else if(nums[mid]<=nums[end])
            {
                end=mid-1;
            }
        }
        return ans;
        
    }
};