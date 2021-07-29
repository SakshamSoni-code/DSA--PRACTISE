/*
Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Example 1:

Input:
N = 5
S = "edsab"
Output:
abdes
Explanation: 
In lexicographical order, string will be 
abdes.


*/

char* countSort(char arr[]){
    
    //Your code here
    int count[256];
    for(int i=0;i<256;i++)
    {
        count[i]=0;
    }
    char output[strlen(arr)];
    for(int i=0;i<strlen(arr);i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<256;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    
    for(int i=strlen(arr)-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    
    for(int i=0;i<strlen(arr);i++)
    {
        arr[i]=output[i];
    }
    return arr;
}