/*

Given a String S and an integer K. Find the count of all substrings of length K which have exactly K-1 distinct characters.

 

Example 1:

Input:
S = "abcc"
K = 2
Output:
1
Explanation:
Possible substrings of length K = 2 are
ab : 2 distinct characters
bc : 2 distinct characters
cc : 1 distinct character
Only one valid substring exists {"cc"}. 

*/

int countOfSubstrings(string S, int K) {
        // code here
        map<char,int>mp;
        int ans=0;
        int i=0,j=0;
        while(j<S.length())
        {
            mp[S[j]]++;
            if((j-i+1)<K)j++;
            else if((j-i+1)==K)
            {
                if(mp.size()==K-1)
                {
                    ans++;
                }
                mp[S[i]]--;
                if(mp[S[i]]==0)
                {
                    mp.erase(S[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }