/*Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

Example 1:

Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
Explanation: Number of 1's in given 
binary array : 1 1 1 1 1 0 0 0 is 5. */
int countOnes(int arr[], int N)
    {
         // binary seach t.c-> O(logn)
        int l=0,h=N-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(arr[mid]==0)
            {
                h=mid-1;
            }
            else
            {
                if(mid==N-1 || arr[mid+1]==0) return mid+1;
                else 
                 l=mid+1;
            }
        }
        return 0;
        
        /* brute force   t.c->o(n)  s.c->o(1)
        int count=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0)
            {
                break;
            }
            else
            {
                count++;
            }
        }
        return count; */
    }
