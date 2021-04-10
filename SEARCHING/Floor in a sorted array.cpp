/*
A peak element in an array is the one that is not smaller than its neighbours.
Given an array of size N, find the index of any one of its peak elements.
 

Example 1:

Input:
N = 3
arr[] = {1,2,3}
Output: 2 
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
*/

int peakElement(int arr[], int n)
{
   // Your code here
   if(n==1) return 0;
   int start=0,end=n-1;
   while(start<=end)
   {
       int mid=start+(end-start)/2;
       if(mid>0 && mid<n-1)
       {
           if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
           return mid;
           else if(arr[mid-1]>=arr[mid]) 
           end=mid-1;
           else 
           start=mid+1;
       }
       else if(mid==0)
       {
           if(arr[0]>=arr[1]) 
           return 0;
           else 
           return 1;
       }
       else if(mid==n-1)
       {
           if(arr[n-1]>=arr[n-2]) 
           return n-1;
           else 
           return n-2;
       }
   }
}