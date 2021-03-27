/*Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
 

Example 1:

Input:
N = 2
A[] = {1, 10}
Output:
1
Explanation:
A[0]<=A[1] so (j-i) is 1-0 = 1.
Example 2:

Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required 
condition(A[i] <= A[j]) thus giving 
the maximum difference of j - i 
which is 6(7-1).

*/

int maxIndexDiff(int arr[], int n) 
    { 
        
        // Your code here
        int l=0,h=n-1,ans=0,max=0;
        while(l<=h)
        {
            if(arr[l]<=arr[h])
            {
                ans=h-l;
                if(ans>max)
                {
                    max=ans;
                }
                l++;
                h=n-1;
            }
            else
            {
                h--;
            }
        }
        return max;
        
    }