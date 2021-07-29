/*
Given an array nums of non-negative integers, return an array consisting of all the even elements of nums, followed by all the odd elements of nums.

You may return any answer array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        //TWO WAY PARTITIONING
        // using lomuto partition t.c->O(n)  s.c->O(1)
        
        int i=-1;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]%2==0)
            {
               i++;
                swap(A[i],A[j]);
            }
        }
        return A;
        
        
        
        /* brute force
        //t.c-> O(n)  s.c->O(n)
        vector<int> temp;
        
        for(auto it:A){
            if(it%2==0) temp.push_back(it);
        }
        for(auto it:A){
            if(it%2!=0) temp.push_back(it);
        }
        return temp;  */
    }
};