/*
Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s.

Example 1:

Input:
N = 4
A[] = {0,1,0,1}
Output: 4
Explanation: The array from index [0...3]
contains equal number of 0's and 1's.
Thus maximum length of subarray having
equal number of 0's and 1's is 4.




*/
 int maxLen(int arr[], int N)
    {
        //making all zeroes into -1
      
      for(int i=0;i<N;i++)
      {
          if(arr[i]==0) arr[i]=-1;
      }
      // find the largest subarray with sum is 0;
      unordered_map<int,int> m;
      int sum=0;
      int maxlen=0;
      for(int i=0;i<N;i++)
      {
          sum+=arr[i];
          if(sum==0)
          {
              maxlen=i+1;
          }
          else
          {
              if(m.find(sum)!=m.end())
                maxlen=max(maxlen,i-m[sum]);
              else
              {
                  m[sum]=i;
              }
          }
      }
      return maxlen;
    }