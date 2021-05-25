/*
Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1



*/
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes h
        
        unordered_set<int> s;
        int cnt=0;
         for(int i=0;i<n;i++)
         {
             s.insert(a[i]);
         }
         
         for(int i=0;i<m;i++)
         {
             if(s.find(b[i])!=s.end())
             {
                 s.erase(b[i]);
                 cnt++;
             }
         }
         return cnt;
        
        /* ti.c_> o(n) s.c-> O(n)
        int cnt=0;
        unordered_map<int,int> m1;
        for(int i=0;i<n;i++)
        {
            m1[a[i]]++;
        }
        unordered_map<int,int> m2;
        for(int j=0;j<m;j++)
        {
            m2[b[j]]++;
        }
        
        for(auto p :m1){
        
            if(m2.find(p.first)!=m2.end())
            {
                cnt++;
            }
        }
        return cnt;
        
        /* // brute forcet.c-> o(m+n) s.c->O(m+n)
        vector<int> v;
        sort(a,a+n);
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            
            if(a[i]!=a[i-1]) v.push_back(a[i]);
        }
        sort(b,b+m);
        v.push_back(b[0]);
        for(int i=1;i<m;i++)
        {
            if(b[i]!=b[i-1])
            {
                v.push_back(b[i]);
            }
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1]) cnt++;
        }
        return cnt;  */
    }