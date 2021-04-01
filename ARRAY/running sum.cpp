/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]

*/

vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> rsum;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rsum.push_back(sum);
        }
        return rsum;
    }