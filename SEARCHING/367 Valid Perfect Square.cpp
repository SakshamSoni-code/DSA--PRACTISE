class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1,high=num;
        
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            long long msq=mid*mid;
            
            if(msq==num) return true;
            
            else if(msq<num) low=mid+1;
            else high=mid-1;
        }
        return false;
        
    }
};