/*
Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

A subarray is a contiguous subsequence of the array.

Return the sum of all odd-length subarrays of arr.

 

Example 1:

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58


*/



class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // optimised way is a hard problem   t.c->O(n)  s.c->O(1)
        int result=0;
        for(int i=0;i<arr.size();i++)
        {
            int start=arr.size()-i;
            int end=i+1;
            int total=start*end;
            int odd=total/2;
            if(total%2==1) odd++;
            result+=odd*arr[i];
        }
        return result;
        
        
        
        /* brute force t.c->O(n^2) s.c->O(1)
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int count=1;
            for(int j=i;j<arr.size();j++)
            {
                if(count%2!=0)
                {
                    sum=accumulate(arr.begin()+i,arr.begin()+j+1,sum);
                }
                count++;
            }
        }
        return sum; */
        
    }
};