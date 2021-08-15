class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        //NICE APPROACH t.c-> O(n)
        
        int diff=(accumulate(aliceSizes.begin(),aliceSizes.end(),0)-accumulate(bobSizes.begin(),bobSizes.end(),0))/2;
        
        for(auto a : aliceSizes){
            if(find(bobSizes.begin(),bobSizes.end(),a-diff)!=bobSizes.end())
                return {a,a-diff};
        }
        return {};
        
        
        
        
        
        
        
        /* Brute-Force t.c-> O(n^2)
        long long sumA=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        long long sumB=accumulate(bobSizes.begin(),bobSizes.end(),0);
        long long temp=sumA;
        vector<int> ans;
        for(long long a:aliceSizes)
        {
            sumA=sumA-a;
            for(long long b:bobSizes)
            {
                if((sumB+a-b)==(sumA+b))
                {
                    ans.push_back(a);
                    ans.push_back(b);
                    return ans;
                }
            }
            sumA=temp;
        }
        return ans;  */
    }
};