/*
Given an array arr[] of N elements and an integer S. The task is to find the minimum number K such that the sum of the array elements does not exceed S after dividing all the elements by K. 
Note: Consider integer division.
Examples: 

Input: arr[] = {10, 7, 8, 10, 12, 19}, S = 27 
Output: 3 
After dividing by 3, the array becomes 
{3, 2, 2, 3, 4, 6} and the new sum is 20.
Input: arr[] = {19, 17, 11, 10}, S = 40 
Output: 2 */


// t.c-> o(log(maxi)*n)  s.c->o(1)

#include<bits/stdc++.h>
using namespace std;

bool answerPossible(int a[],int n,int s,int k)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(a[i]/k);
    }
    if(sum<=s) return true;
    else return false;
}

int findMinimumK(int a[],int n,int s)
{
    int low=0;
    int high=*max_element(a,a+n)+1;
    
    int k=0;
    
    while(low<=high)
    {
        int mid=(low+high)>>1;
        
        if(answerPossible(a,n,s,mid))
        {
            k=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return k;
}


int main()
{
    int a[] = { 10, 7, 8, 10, 12, 19 };
    int n = sizeof(a) / sizeof(a[0]);
    int s = 27;
 
    cout << findMinimumK(a, n, s);
 
    return 0;
}


