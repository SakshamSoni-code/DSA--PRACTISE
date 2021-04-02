/*
Given a binary array, find the maximum number zeros in an array with one flip of a subarray allowed. A flip operation switches all 0s to 1s and 1s to 0s.
Examples:

Input :  arr[] = {0, 1, 0, 0, 1, 1, 0}
Output : 6
We can get 6 zeros by flipping the subarray {1, 1}

Input :  arr[] = {0, 0, 0, 1, 0, 1}
Output : 5
*/

// O(n) t.c and o(1) s.c
int findMaxZeroCount(bool arr[], int n)
{
	int curr=0,count=0,noZeroes=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==0) noZeroes++;
    }
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0) curr=0;
    else
    {
      curr++;
      count=max(count,curr);
    }  
  }
  return noZeroes+count;
}