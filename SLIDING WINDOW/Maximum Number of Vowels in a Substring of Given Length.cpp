/*
Given a string s and an integer k.

Return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are (a, e, i, o, u).

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int count=0;
        int max_count=0;
         while(j<s.length())
         {
             if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') count++;
             if((j-i+1)<k) j++;
             else if((j-i+1)==k)
             {
                 max_count=max(max_count,count);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count--;
                i++;
                j++;

             }
         }
        
        return max_count;
        
    }
};