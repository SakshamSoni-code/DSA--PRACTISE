/*
Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:

0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
Where |x| denotes the absolute value of x.

Return the number of good triplets.

 

*/



class Solution {
public:
    // more efficient t.c->O(n)    s.c->O(1)
    int largestAltitude(vector<int>& gain) {
        // more efficient
        int curr_alt=0,max_alt=0;
        for(int i=0;i<gain.size();i++)
        {
            curr_alt+=gain[i];
            max_alt=max(max_alt,curr_alt);
        }
        return max_alt;
        
        
        
        /* efficient t.c->O(n)    s.c->O(1)
        gain.insert(gain.begin(),0);
        for(int i=1;i<gain.size();i++)
        {
            gain[i]=gain[i]+gain[i-1];
        }
        return *max_element(gain.begin(),gain.end());
        /*
        t.c->O(n) s.c->O(n)
        vector<int> v(gain.size()+1,0);
        for(int i=1;i<v.size();i++)
        {
            v[i]=v[i-1]+gain[i-1];
        }
        int max=*max_element(v.begin(),v.end());
        return max; */
    }
};