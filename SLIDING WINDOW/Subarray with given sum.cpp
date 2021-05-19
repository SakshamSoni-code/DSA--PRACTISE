/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

 

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

*/

vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> ans;
        int i=0,j=0,sum=0,count=0;
        while(j<n)
        {
            sum+=arr[j];
            if(sum<s) j++;
            else if(sum==s)
            {
                count++;
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
                //j++;
            }
            else if(sum>s)
            {
                while(sum>s)
                {
                    sum-=arr[i];
                    i++;
                }
                if(sum==s)
                {
                    sum-=arr[j];
                }
                else
                {
                    j++;
                }
            }
        }
      
        if(count>0) return ans;
        else
        {
            ans.push_back(-1);
            return ans;
        }
    }