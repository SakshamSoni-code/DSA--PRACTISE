/*
Consider a big party where N guests came to it and a log register for guest’s entry and exit times was maintained. Find the minimum time at which there were maximum guests at the party. Note that entries in the register are not in any order.

Example 1:

Input:
N = 5
Entry= {1, 2,10, 5, 5}
Exit = {4, 5, 12, 9, 12}
Output: 3 5
Explanation: At time 5 there were 
             guest number 2, 4 and 5 present.

*/
vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   
	   // t.c->O(nlogn)  s.c->O(1)
	   vector<int> ans;
	   sort(Entry,Entry+N);
	   sort(Exit,Exit+N);
	   
	   int i=1,j=0,curr=1,res=1,tim=Entry[0];
	   
	   while(i<N && j<N)
	   {
	       if(Entry[i]<=Exit[j])
	       {
	           curr++;
	           if(curr>res)
	          {
	            res=curr;
	            tim=Entry[i];
	          }
	           i++;
	       }
	       else{
	           curr--;
	           j++;
	       }
	       
	   }
	   ans.push_back(res);
	   ans.push_back(tim);
	   return ans;

	}