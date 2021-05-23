/*
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.



*/


bool subArrayExists(int arr[], int n)
    {
           unordered_set<int> ust;
           int sum=0;
           for(int i=0;i<n;i++)
           {
               sum+=arr[i] ;// Prefix sum
               
               if(sum==0 || ust.find(sum)!=ust.end()) return true;
                ust.insert(sum);
           }
           return false;
    }