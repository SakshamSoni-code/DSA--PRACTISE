/*

Given an unsorted array, find the minimum difference between any pair in given array.
 

Example 1:

Input: nums = [2, 4, 5, 9, 7]
Output: 1
Explanation: Difference between 5 and 4 is 1.



*/

   	int  minimum_difference(vector<int>nums){
   	    // Code here
   	    
   	    //t.c->O(nlogn) s.c->O(1)
   	    sort(nums.begin(),nums.end());
   	    int min_diff=INT_MAX;
   	    for(int i=1;i<nums.size();i++)
   	    {
   	        min_diff=min(min_diff,nums[i]-nums[i-1]);
   	    }
   	    return min_diff;
   	}    