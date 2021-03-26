/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.
 

Example 2:

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.

*/


void arrange(long long arr[], int n) {
        // Your code here
        /* O(n) extra space
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(arr[arr[i]]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];
        }
        v.clear();
        */     //O(1) extra space

        for(int i=0;i<n;i++)
        {
            arr[i]=((arr[arr[i]]%n)*n)+arr[i];    // now arr[i] will hold new as well as old value
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]/n;       // new value
        }
        
    }