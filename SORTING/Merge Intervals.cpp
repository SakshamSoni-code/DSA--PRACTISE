/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].



*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        //t.c-> O(nlogn)  s.c->O(1)
        if(intervals.size()<=1) return intervals;
        
        sort(intervals.begin(),intervals.end(),[](vector<int> a, vector<int> b){return a[0]<b[0];});
        vector<vector<int>> output;
        
        output.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(output.back()[1]>=intervals[i][0])
            {
                output.back()[1]=max(output.back()[1],intervals[i][1]);
            }
            else{
                output.push_back(intervals[i]);
            }
        }
        return output;
    }
};