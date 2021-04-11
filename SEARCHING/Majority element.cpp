/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
*/

int majorityElement(int a[], int size)
{
        
    // MOORE'S VOTING ALGORITHM
    int cand_index=0,count=1;
    for(int i=1;i<size;i++){
        if(a[cand_index]==a[i]) count++;
        else count--;
        if(count==0)
        {
            cand_index=i;
            count=1;
        }
    }  
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[cand_index]) cnt++;
    }
    if(cnt>(size/2)) return a[cand_index];
    else return -1;
}

        
       
        
    
  
