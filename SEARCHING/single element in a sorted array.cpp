/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Follow up: Your solution should run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10


*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // shrik left half and righ half to reach the breaking point
        // what is breaking point??
        ///---it is index before which all elements appear twice(left half) and 
        ///--  at this index we have a single element and after it we have twice elements(right half)
        // forleft half
        // 1st instance-> even index
        // 2nd instance -> odd index
        // jst check for left half
        // if we are on left half then we gonna shrink left half
        // if we are not right half then we gonna shrink right half
        
        /*int low=0,high=nums.size()-2;
        while(low<=high)
        {
            int mid=low+(high-low)/2;  // low+(high-mid)/2
            if(mid%2!=0)//odd
            {
                if(nums[mid]==nums[mid-1]) low=mid+1;
                else high=mid-1;
            }
            else{
                if(nums[mid]==nums[mid+1]) low=mid+1;
                else high=mid-1;
            }
        }
        return nums[low];   */ 
        
        int low=0,high=nums.size()-2;
        while(low<=high)
        {
            int mid=(low+high)>>1;  // low+(high-mid)/2
            if(nums[mid]==nums[mid^1]){
                // we on left and will shrink
                low=mid+1;
            }
            else{
                // we are on right half and will shrink it
                high=mid-1;
            }
        }
        return nums[low];   
        
    }
};