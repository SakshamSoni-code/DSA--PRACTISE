/*
The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

 

Example 1:

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common 
elements in both the arrays.



*/
  vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        int i=0,j=0;
        vector<int> ans;
        while(i<N && j<M)
        {
            if(i>0 && arr1[i]==arr1[i-1])
            {
                i++;
                continue;
            }
            if(arr1[i]<arr2[j]) i++;
            else if(arr1[i]>arr2[j]) j++;
            else
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
















/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
