/*
Given n integer ranges, the task is to find the maximum occurring integer in these ranges. If more than one such integer exits, find the smallest one. The ranges are given as two arrays L[] and R[].  L[i] consists of starting point of range and R[i] consists of corresponding end point of the range.

For example consider the following ranges.
L[] = {2, 1, 3}, R[] = {5, 3, 9)
Ranges represented by above arrays are.
[2, 5] = {2, 3, 4, 5}
[1, 3] = {1, 2, 3}
[3, 9] = {3, 4, 5, 6, 7, 8, 9}
The maximum occurred integer in these ranges is 3.

Example 1:

Input:
n = 4
L[] = {1,4,3,1}
R[] = {15,8,5,4}
Output: 4
Explanation: The given ranges are [1,15]
 [4, 8] [3, 5] [1, 4]. The number that 
is most common or appears most times in 
the ranges is 4.
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
 int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here                                       // maxx is max element in R[] arry already provided in fun
        int temp[maxx+1]={0};
        for(int i=0;i<n;i++)
        {
            int x=L[i];
            int y=R[i];
            while(x<=y)
            {
                temp[x]++;
                x++;
            }
        }
       int max=INT_MIN,index=-1;
       for(int i=0;i<maxx+1;i++)
       {
           if(temp[i]>max)
           {
               max=temp[i];
               index=i;
           }
       }
       return index; 
    }


int main()
{
    
   ios::sync_with_stdio(false);   
   cin.tie(0);
 
}