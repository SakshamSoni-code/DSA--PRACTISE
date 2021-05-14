/*
Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.






*/





class Solution{
public:
	int search(string pat, string txt) {
	    int len=pat.length();
	    int ans=0;
	    map<char,int> m;
	    for(int i=0;i<len;i++)
	    {
	        m[pat[i]]++;          //storing freq of eacg char in pat in a map
	    }
	    int count=m.size();
	    int i=0,j=0;
	    while(j<txt.size())
	    {
	        if(m.find(txt[j])!=m.end())
	        {
	            m[txt[j]]--;
	            if(m[txt[j]]==0) count--;
	        }
	        if((j-i+1)<len) j++;
	        else if((j-i+1)==len)
	        {
	            if(count==0) ans++;
	            if(m.find(txt[i])!=m.end())
	            {
	                m[txt[i]]++;
	                if(m[txt[i]]==1) count++;
	            }
	           i++;
	           j++;
	        }
	    }
	    return ans;
	}

};