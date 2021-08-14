class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //Golden-Section Search
        
        
        
        
        
        // BINARY SEARCH  t.c-> O(logn)
        int low=0,high=arr.size()-1;
        
        while(low<=high)
        {
            int mid=(low+high)>>1;
            if(arr[mid]<arr[mid+1]) low=mid+1;
            else high=mid-1;
          
        }
    return low;  
    }
};