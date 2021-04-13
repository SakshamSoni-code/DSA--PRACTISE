/*
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6

*/




vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                long long int i=0,j=0;
                list<long long int> l;
                vector<long long> v;
                 while(j<N)
                 {
                     if(A[j]<0)
                     {
                         l.push_back(A[j]);
                     }
                     if((j-i+1)<K)
                      {
                          j++;
                      }
                      else if((j-i+1)==K)
                      {
                          // 1-calculation
                          if(l.size()==0)
                          {
                              v.push_back(0);
                          }
                          else
                          {
                              v.push_back(l.front());
                              if(A[i]==l.front())
                              {
                                  l.pop_front();
                              }
                          }
                          i++;
                          j++;
                      }
                 }
                 return v;
                                                 
 }
