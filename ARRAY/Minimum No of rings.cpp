/*
You are given a strictly increasing integer array rungs that represents the height of rungs on a ladder. You are currently on the floor at height 0, and you want to reach the last rung.

You are also given an integer dist. You can only climb to the next highest rung if the distance between where you are currently at (the floor or on a rung) and the next rung is at most dist. You are able to insert rungs at any positive integer height if a rung is not already there.

Return the minimum number of rungs that must be added to the ladder in order for you to climb to the last rung.

 

Example 1:

Input: rungs = [1,3,5,10], dist = 2
Output: 2
Explanation:
You currently cannot reach the last rung.
Add rungs at heights 7 and 8 to climb this ladder. 
The ladder will now have rungs at [1,3,5,7,8,10].
Example 2:

Input: rungs = [3,6,8,10], dist = 3
Output: 0
Explanation:
This ladder can be climbed without adding additional rungs.


*/

class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        //OPTIMISED   t.c->O(n)  s.c->O(1)
        int previous=0;
        int count=0;
        
        for(int i=0;i<rungs.size();i++)
        {
          count=count+(rungs[i]-previous-1)/dist;
           previous=rungs[i];
        }
        
        
        return count;
        
        /***BRUTE FORCE->DO NOT WORK FOR LARGE INPUTS
        t.c->O(n^2) s.c->O(1)
        int cnt=0;
        if(rungs.size()==1)
        {
          if(rungs[0]<=dist) return 0;
          else{
            int x=0;
             while(rungs[0]-x>dist)
             {
               x+=dist;
                 cnt++;
             }
          }
            return cnt;
        }
        for(int i=0;i<rungs.size()-1;i++)
        {
           if(i==0 && rungs[i]>dist)
           {
              int x1=0;
               while(rungs[i]-x1>dist)
               {
                 x1+=dist;
                 cnt++;
               }
           }
            if(rungs[i+1]-rungs[i]>dist )
            {
              int x2=rungs[i];
                while(rungs[i+1]-x2>dist)
                {
                  x2+=dist;
                    cnt++;
                }
            }
        }
        return cnt;   */
        
    }
};