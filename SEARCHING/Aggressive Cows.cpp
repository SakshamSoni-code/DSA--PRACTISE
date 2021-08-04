/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/*---------------------------------*//******GIVE YOUR BEST AND FORGET THE REST*****/



//----------SAKSHAM SONI---------
#include<bits/stdc++.h>


#define fast       ios::sync_with_stdio(0); cin.tie(0)
#define testcase    ll t;cin>>t;while(t--)
#define fw(i,a,b)   for(int i=a;i<b;i++)
#define fw1(i,a,b)  for(int i=a;i<=b;i++)
#define bw(i,a,b)   for(i=a;i>b;i--)
#define bw1(i,a,b)  for(i=a;i>=b;i--)
#define pb          push_back
#define vec         vector<ll>
#define pll       pair<ll,ll>
#define mll         map<ll,ll>
#define F           first
#define S           second
#define lcm(a,b)    (a*b)/(__gcd(a,b))
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define prt(x)      cout<<x
#define prts(x)     cout<<x<<" "
#define prtl(x)     cout<<x<<endl
#define prtnl()     cout<<"\n"
#define endl        "\n"
#define ll long long
#define check       cout<<checkedDude<<endl

const ll mod = 1000000007; //10^9+7

using namespace std;

/*
int gcdx( ll a, ll b)
         {
          if(b==0)return a%b;
          else return gcdx(b,a%b);
         }
*/
bool canPlace(ll a[],ll n,ll c,ll sep)
{
    ll loc=a[0],cows=1;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]-loc>=sep)
        {
            cows++;
            loc=a[i];
        }
        if(cows==c) return true;
    }
    return false;
}
// t.c-> O(log(size of search space)*n)
int32_t main() {
    
    fast;
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        ll a[n];
        ll ans=-1;
        
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        
        ll low=1,high=a[n-1]-a[0];
        
        while(low<=high)
        {
            ll mid=(low+high)>>1;
            
            if(canPlace(a,n,c,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }



  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
