/*You are given N number of books. Every ith book has Ai number of pages. 
You have to allocate books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value. 

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).


Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:
113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.
Example 2:

Input:
N = 3
A[] = {15,17,20}
M = 2
Output:
32
Explanation:
Allocation is done as 
{15,17} and {20}  */

class Solution 
{
    public:
    //Function to find minimum number of pages
    bool isValid(int arr[],int n, int m,int mid)
    {
        int stud=1,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>mid)
            {
                stud++;
                sum=arr[i];
            }
            if(stud>m) return false;
        }
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        if(n<m) return -1;
        int start=*max_element(arr,arr+n);
        int end=accumulate(arr,arr+n,0);
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(isValid(arr,n,m,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};


