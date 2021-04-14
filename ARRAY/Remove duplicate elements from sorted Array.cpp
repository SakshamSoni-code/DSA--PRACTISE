/*

Given a sorted array A of size N, delete all the duplicates elements from A.


Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.




*/
 int remove_duplicate(int a[],int n){
        // code here
        int size=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[size-1])
            {
                a[size]=a[i];
                size++;
            }
        }
        return size;
    }