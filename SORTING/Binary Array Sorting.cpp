/*
Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
 

Example 1:

Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.
*/

void binSort(int A[], int N)
{
   //Your code here
   
   /**************
    * No need to print the array
    * ************/
    
    
    // TWO POINTER
    
    int i=0,j=N-1;
    while(i<j)
    {
        if(A[i]==0)i++;
        
        else if(A[j]==1)j--;
        else
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    /* // HOARE'S PART 
    long i=-1,j=N;
    while(i<j)
    {
        do{
            i++;
        }while(A[i]==0);
        
        do{
            j--;
        }while(A[j]==1);
        
        if(i>=j) return ;
        else
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    
    /* LOMUTO PARTITION
    int i=-1;
    for(int j=0;j<N;j++)
    {
        if(A[j]=1)
        {
            i++;
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    } */
}