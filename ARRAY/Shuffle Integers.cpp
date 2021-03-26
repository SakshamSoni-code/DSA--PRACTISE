/*Given an array arr[] of n elements in the following format {a1, a2, a3, a4, ….., an/2, b1, b2, b3, b4, …., bn/2}, the task is shuffle the array to {a1, b1, a2, b2, a3, b3, ……, an/2, bn/2} without using extra space.

Example 1:

Input: n = 4, arr[] = {1, 2, 9, 15}
Output:  1 9 2 15
Explanation: a1=1 , a2=2 , b1=9 , b2=9
So the final array will be :  
a1, b1, a2, b2 = { 1, 9, 2, 15 }

Example 2:
Input: n = 6
arr[] = {1, 2, 3, 4, 5, 6}
Output: 1 4 2 5 3 6


*/
// not optimesd T.C->O(n)   S.C->O(n)
void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int temp1[n/2];
	    int temp2[n/2];
	    for(int i=0;i<n/2;i++)
	    {
	        temp1[i]=arr[i];
	    }
	    int k=0;
	    for(int i=n/2;i<n;i++)
	    {
	        temp2[k]=arr[i];
	        k++;
	    }
	    int j=0;
	    for(int i=0;i<n;i+=2)
	    {
	        arr[i]=temp1[j];
	        arr[i+1]=temp2[j];
	        j++;
	    }
	}