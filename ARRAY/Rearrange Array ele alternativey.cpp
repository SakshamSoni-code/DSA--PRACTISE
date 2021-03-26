/*Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
*/
//Brute force -> two pointer
// T.C:O(n) S.C O(N)


// effcient approach
// T.C O(n) S.C O(1)
// technique-> storing two elements at one array index           

 void rearrange(long long *arr, int n) 
    { 
    	
    	 long long maxi=n-1,mini=0;
    long long me=arr[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+(arr[maxi]%me)*me;
            maxi--;
        }
        else
        {
            arr[i]=arr[i]+(arr[mini]%me)*me;
            mini++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/me;
    }
    	 
    }