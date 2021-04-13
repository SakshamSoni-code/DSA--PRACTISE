/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

 

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
*/

int maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        int i=0,j=0,sum=0,max_sum=INT_MIN;
        while(j<N)
        {
            sum=sum+Arr[j];
            if((j-i+1)<K)
            {
                j++;
            }
            else if((j-i+1)==K)
            {
                max_sum=max(max_sum,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return max_sum;
    }