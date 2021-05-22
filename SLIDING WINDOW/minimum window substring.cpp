/*
Given two strings s and t of lengths m and n respectively, return the minimum window in s which will contain all the characters in t. If there is no such window in s that covers all characters in t, return the empty string "".

Note that If there is such a window, it is guaranteed that there will always be only one unique minimum window in s.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Example 2:

Input: s = "a", t = "a"
Output: "a"
*/

class Solution {
public:
    string minWindow(string s, string t) {
        
        int Ft[256]={0};
        int Fs[256]={0};
        
        for(char c:t) Ft[c]++;    // frequency array of pattern
        
        int cnt=0;
        int i=0; // use for ledt contraction
        int min_so_far=INT_MAX; // best window
        int start_index=-1;// start index for best window
        int window_size;  // current window size
        
        for(int j=0;j<s.length();j++)
        {
            // expand my window by including the current charcter
            Fs[s[j]]++;
            
            // count how many charcters have been mathced till now (string and pattern)
             if(Ft[s[j]]!=0 && Fs[s[j]]<=Ft[s[j]])
            {
                cnt++;
            }
            
         // if all charchters of pattern is found in my current window then we can start contarction
            
            if(cnt==t.length())
            {
                
                // strat removing from left to remove unwanted charchters
       // unwanted chars->  1- any char from left in s which is not present in t
                         // 2- any char in s whose freq is extra as compare to requirement in t
                while(Ft[s[i]]==0 || Fs[s[i]]>Ft[s[i]])
                {
                    Fs[s[i]]--;
                    i++;
                }
                
                // store the current window
                window_size=j-i+1;
                if(window_size<min_so_far)
                {
                    
                   min_so_far=window_size;
                   start_index=i;
                }
            }
        }
        if(start_index==-1) return "";
        return s.substr(start_index,min_so_far);
    }
};
        
        
        
        
        
        
        
        
        
        
        