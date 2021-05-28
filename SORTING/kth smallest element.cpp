/*
Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.

 

Example 1:

Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}

Output: 
4

Explanation: 
Third smallest element in the array is 4.


*/

int lomutoPartition(int arr[],int l,int h)
    {
        int pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[h]);
        return i+1;
    }
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        int l=0,h=n-1;
        while(l<=h)
        {
            int p=lomutoPartition(arr,l,h);
            
            if(p==k-1) return arr[p];
            
            else if(p<k-1) l=p+1;
            else h=p-1;
        }
        return -1;
    }