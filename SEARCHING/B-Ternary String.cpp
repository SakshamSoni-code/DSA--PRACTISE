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

const ll mod = 1000000007; //10^9+7

using namespace std;

/*
int gcdx( ll a, ll b)
         {
          if(b==0)return a%b;
          else return gcdx(b,a%b);
         }
*/
bool isLength(string s,int len)
{
    if(len<3) return false;
    int i=0,j=0;
    map<char,int> mp;
    
    while(j<s.length())
    {
        mp[s[j]]++;
        if((j-i+1)<len)j++;
        else if((j-i+1)==len)
        {
            if(mp.size()==3) return true;
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
                j++;
            }
        }
    }
    return false;
}


int32_t main() {
    
    fast;
    int t;
    cin>>t;
    
    string s;
    while(t--)
    {
        cin>>s;
        if((s.find('1')==string::npos) || (s.find('2')==string::npos) || (s.find('3')==string::npos)) cout<<0<<endl;
        else{
            int low=3,high=s.length(),ans=0;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
               // cout<<mid<<endl;
                bool b=isLength(s,mid);
                //cout<<b<<endl;
                if(b)
                {
                    ans=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                
            }
            cout<<ans<<endl;
        }
    }



  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
