/*
Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
Example 2:

Input:
N = 3, K = 2
A[] = {4,1,1}
Output: 2 1

*/

vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int> ans;
        map<int,int> mp;
        int i=0,j=0;
         while(j<n)
         {
             mp[A[j]]++;
             if((j-i+1)<k)j++;
             else if((j-i+1)==k)
             {
                 ans.push_back(mp.size());
                 mp[A[i]]--;
                 if(mp[A[i]]==0)
                 {
                     mp.erase(A[i]);
                 }
                 i++;
                 j++;
             }
         }
         return ans;
    }