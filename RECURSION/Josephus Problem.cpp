/*
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.
Input:
n = 3 k = 2
Output: 3
Explanation: There are 3 persons so 
skipping 1 person i.e 1st person 2nd 
person will be killed. Thus the safe 
position is 3.

You don't need to read input or print anything. You are required to complete the function josephus () that takes two parameters n and k and returns an integer denoting safe position. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= k, n <= 20
*/
//
#include<bits/stdc++.h>
using namespace std;

int myJos(int n,int k)
{
        if(n==1)return 0;
        else
        return (myJos(n-1,k)+k)%n;
}
int josephus(int n, int k)
{
       //Your code here
       return myJos(n,k)+1;
}
 
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<josephus(n,k)<<endl;
    
    return 0;
}
