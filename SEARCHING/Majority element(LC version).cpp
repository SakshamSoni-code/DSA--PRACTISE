/*
169. Majority Element
Easy

4876

256

Add to List

Share
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // You may assume that the majority element always exists in the array.
         // MOORE'S VOTING ALGORITHM
        
       
        
    
        
        int candidate=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
           if(candidate==nums[i]) count++;
           else count--;
           if(count==0)
            {
               candidate=nums[i];
               count=1;
            }
        }
        return candidate; 
        
        /*
        int count=0;
        int candidate=0;
        for(int x:nums)
        {
            if(count==0) candidate=x;
            if(x==candidate) count+=1;
            else count-=1;
        }

       return candidate;   */
    }
};
