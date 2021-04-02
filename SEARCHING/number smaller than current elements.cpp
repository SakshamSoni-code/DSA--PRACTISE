/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

 

Example 1:

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

*/

class Solution {
public:
   
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> a(101); // frequency vector
        vector<int> b(101); // prefix vector
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(int i=1;i<101;i++)
        {
            b[i]=b[i-1]+a[i-1];
        }
        // ans 
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=b[nums[i]];
        }
        
        return nums;
        
        
        
        

        /* efficient t.c-> o(n) s.c->o(n)
        vector<int> rev=nums;
        sort(rev.begin(),rev.end());
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=firstOcc(rev,nums[i]);
        }
        return nums;
    }
     int firstOcc(vector<int>& num,int x)
    {
        int l=0,h=num.size()-1;
        while(l<=h)
        { 
            int mid=(l+h)/2;
            if(num[mid]>x) h=mid-1;
            else if(num[mid]<x) l=mid+1;
            else
            {
                if(mid==0 || num[mid-1]!=num[mid]) return mid;
                else
                    h=mid-1;
            }

        }
         return -1; */
    }
};