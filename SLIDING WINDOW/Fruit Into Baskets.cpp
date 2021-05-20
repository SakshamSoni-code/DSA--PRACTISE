/*
In a row of trees, the i-th tree produces fruit with type tree[i].

You start at any tree of your choice, then repeatedly perform the following steps:

Add one piece of fruit from this tree to your baskets.  If you cannot, stop.
Move to the next tree to the right of the current tree.  If there is no tree to the right, stop.
Note that you do not have any choice after the initial choice of starting tree: you must perform step 1, then step 2, then back to step 1, then step 2, and so on until you stop.

You have two baskets, and each basket can carry any quantity of fruit, but you want each basket to only carry one type of fruit each.

What is the total amount of fruit you can collect with this procedure?

 

Example 1:

Input: [1,2,1]
Output: 3
Explanation: We can collect [1,2,1].
Example 2:

Input: [0,1,2,2]
Output: 3
Explanation: We can collect [1,2,2].
If we started at the first tree, we would only collect [0, 1].
Example 3:

Input: [1,2,3,2,2]
Output: 4
Explanation: We can collect [2,3,2,2].
If we started at the first tree, we would only collect [1, 2].
Example 4:

Input: [3,3,3,1,2,1,1,2,3,3,4]
Output: 5
Explanation: We can collect [1,2,1,1,2].
If we started at the first tree or the eighth tree, we would only collect 4 fruits.
*/

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        if(tree.size()==0) return 0;
        
        int ans=1;
        int i=0,j=0;
        
        map<int,int> mp;
        
        while(j<tree.size())
        {
            mp[tree[j]]++;
            
            if(mp.size()<=2)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(mp.size()>2)
            {
                while(mp.size()>2)
                {
                    mp[tree[i]]--;
                    if(mp[tree[i]]==0)
                    {
                        mp.erase(tree[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return ans;
        
    }
};
           
        
        
        
        
        
        
        
        
        
        
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