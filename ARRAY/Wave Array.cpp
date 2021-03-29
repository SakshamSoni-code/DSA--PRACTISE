 /*
 Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
 
 */
 
 void convertToWave(int *arr, int n){
     // O(N)
        
        for(int i=0;i<n;i+=2)
        {
            if(i>0 && arr[i]<arr[i-1])
            {
                swap(arr[i],arr[i+1]);
            }
            if(i<n-1 && arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        
        // Your code here
        /* my approach   O(n)
        for(int i=0;i<n-1;i++){
            int j=i+1;
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
            i+=1;
            j+=1;
            if(i==n-1){
                break;
            }
            else
            {
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        */
        
    }
