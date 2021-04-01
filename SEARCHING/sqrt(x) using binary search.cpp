/*Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).
*/

long long int floorSqrt(long long int x) 
{
    // binary serach   T.C-> O(logx)
    if(x==0 || x==1) return x;
    long long l=1,h=x,ans=-1;
    while(l<=h)
    {
        long long mid=(l+h)/2;
        long long msq=mid*mid;
        if(msq==x) return mid;
        else if(msq>x) h=mid-1;
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
    
   // brute force  T.C-> O(sqrt(x)
   /*
   int i=1;
   while(i*i<=x)
   {
       i++;
   }
   return (i-1); */
}