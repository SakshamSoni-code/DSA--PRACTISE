/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //SLIDING WINDOW MORE OPTIMISED  t.c->O(n)  s.c-> O(n)
        int ans=0;
        unordered_map<char,int> mp;
        int left=0,right=0;
        while(right<s.length())
        {
            if(mp.find(s[right])!=mp.end())
                left=max(mp[s[right]]+1,left);
            
            
            mp[s[right]]=right;
            
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        /* SLIDING WINDOW     t.c is graeter than O(n) s.c-> o(n)
        int ans=0;
        unordered_map<char,int> mp;
        int i=0,j=0;
        
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()==(j-i+1))
            {
                ans=max(ans,j-i+1);
                
                j++;
            }
            else if(mp.size()<(j-i+1))
            {
                while(mp.size()<(j-i+1))
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;*/
    }
};