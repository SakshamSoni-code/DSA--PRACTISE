/* A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Integer N
Output Format :
Integer W
Constraints :
1 <= N <= 30
Sample Input 1 :
4
Sample Output 1 :
7
Sample Input 2 :
5
Sample Output 2 :
13 */

// 1st approach-> using recursion
// T.C-> O(2^n)     S.C->O(n)

#include <iostream>
using namespace std;


int staircase(int n){
   
    if(n<0){
        return 0;
    }
    if(n==0 || n==1)
    {
        return 1;                     //assumed one way of climbing 0 step
    }

    return staircase(n-1)+staircase(n-2)+staircase(n-3);
    
}
int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}