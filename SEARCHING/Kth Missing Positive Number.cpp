class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // BINARY SEARCH APP   s.c-> O(logn)  a.c-> O(1)
        
        int low=0,high=arr.size();
        while(low<high){
            int mid=low+(high-low)/2;
            
            if(arr[mid]-mid-1<k) low=mid+1;
            else high=mid;
        }
        return low+k;
        
        
        
        /* t.c->o(n)  s.c-> O(1)
        for(int a :arr)
        {
            if(a<=k) k++;
            else break;
        }
        return k;  */
    }
};

