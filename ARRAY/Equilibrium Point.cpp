/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input:
n = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 
Example 2:

Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).
Constraints:
1 <= n <= 10^6
1 <= A[i] <= 10^8

*/
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int> 
#define vii vector<ii>
#define ll long long
#define l long
#define lli long long int

#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n) {                      // there are 5-6 approaches for this problem
        int lsum=0;//left sum
        int sum=0; //total sum
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum=sum-a[i]; //sum is now right sum
            if(lsum==sum)
            {
                return i+1;
            }
            else
            {
                lsum=lsum+a[i];
            }
        }
        return -1;

/* brute force O(n^2)
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        for(int eqlb=1;eqlb<n-1;eqlb++)
        {
            int suml=0,sumr=0;
            for(int i=0;i<eqlb;i++)
            {
                suml+=a[i];
            }
            for(int i=eqlb+1;i<n;i++)
            {
                sumr+=a[i];
            }
            if(suml==sumr)
            {
                return eqlb+1;
            }
        }
        return -1;
    }
*/
int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
   ll a[]={1,3,5,2,2};
   cout<<equilibriumPoint(a,5);
}