/*Given an integer array and another integer element. The task is to find if the given element is present in array or not..
*/

int search(int arr[], int N, int X)
    {
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]==X)
            {
                return i;
            }
        }
        return -1;
    }
