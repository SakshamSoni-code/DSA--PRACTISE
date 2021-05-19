/*
Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.

Example 1:

Input:
S = "aabacbebebe", K = 3
Output: 7
Explanation: "cbebebe" is the longest 
substring with K distinct characters.

*/

int longestKSubstr(string s, int k) {
    // your code herez
     int ans=-1;
     map<char,int> mp;
     int i=0,j=0;
     while(j<s.length())
     {
         mp[s[j]]++;
         if(mp.size()<k) j++;
         
         else if(mp.size()==k)
         {
             ans=max(ans,j-i+1);
             j++;
         }
         else if(mp.size()>k)
         {
             while(mp.size()>k)
             {
                 mp[s[i]]--;
                 if(mp[s[i]]==0)
                 {
                     mp.erase(s[i]);
                 }
                 i++;
             }
             j++;
         }
     }
     return ans;
    }