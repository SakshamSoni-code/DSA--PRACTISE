/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

 

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.


*/


int maxSubarraySum(int arr[], int n){
         // 1st version
        int res=arr[0],maxEnding=arr[0];
        for(int i=1;i<n;i++)
        {
            maxEnding=max(maxEnding+arr[i],arr[i]);
            res=max(res,maxEnding);
        }
        return res;
        
        // Your code here
        /* 2nd version
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi; */
    } 