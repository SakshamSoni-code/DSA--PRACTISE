/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

 

Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers. */


class Solution {
public:
    string sortSentence(string s) {
        
       vector<string> vs(10,"");  //As at max 9 words are allowed, we use a string vector of size 10 to store word positions.
        
        //Then we simply traverse our input string word by word and keep adding it in the vs array as per it's given position digit.
        
       for(int i=0;i<s.size();i++)
       {
           int j=i;
           string temp;
           while(!isdigit(s[j])){
               temp.push_back(s[j]);
               j++;
           }
           vs[s[j]-'0']=temp;
           i=j+1;
       }
    
        
        //Lastly, we travese our vs array and append the strings with spaces to the final answer.
        string ans;
        for(int i=0;i<10;i++)
        {
            if(vs[i].length()>0)
            {
                ans+=vs[i];
                ans.push_back(' ');
            }
        }
        
        //The answer must not end with a space so we delete the last space before returning.
        ans.pop_back();
        return ans;
    }
};