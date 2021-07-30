#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define bs(n) bitset<n>
#define pi acos(-1)
#define pb push_back
#define input(a) static ll u;cin>>u;a.pb(u);
#define mp make_pair
#define out(v); for(ll i=0;i<v.size();i++) {cout<<v[i]<<" ";} cout<<endl;
#define mset(a,x) memset(a,x,sizeof(a))
#define all(x) (x).begin(),(x).end()
#define loop(i,a,n) for(ll i=a;i<n;i++)
#define rloop(i,n,a) for(ll i=n-1;i>=a;i--)
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define br cout<<endl
#define w(t) ll t;cin>>t;while(t--)
#define noMatch string::npos
#define point(a) fixed<<setprecision(a)
#define MIN 0
#define MAX 999999999999999999
#define MOD 10e9 + 7
#define Fast_Read     ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
typedef pair< ll, ll> PII;
vi primeSieve;
inline ll GCD(ll x,ll y) {ll p=max(x,y);ll q=min(x,y);
while(q){p%=q;swap(p,q);}return p;}

inline ll LCM(ll x,ll y){ll m=x*y; return m/GCD(x,y);}

inline bool isPrime(ll x){if(x<2) return false;if(x==2)return true;if(x%2==0) return false;
ll limit=sqrt(x+1);for(ll i=3;i<=limit;i+=2){if(x%i==0){return false;break;}} return true;}

inline void setPrime(ll x){loop(i,0,x+1){if(isPrime(i))primeSieve.pb(i);}}

inline ll NOD(ll x){ll num,ans=1;for(ll i=0;primeSieve[i]<=x;i++)
{if(x%primeSieve[i]==0){num=0;while(x%primeSieve[i]==0){x/=primeSieve[i];
num++;}ans*=(num+1);}}return ans;}

inline char toCap(char x){return x-'a'+'A';}

inline ll toNum(char x){ return x-48;}
///////////////***************SET SAIL***************\\\\\\\\\\\\\\\

void solve();
int main()
{
    Fast_Read;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    solve();
    return 0;
}
void solve()
{
    ll n,ans;
    w(t)
    {
        ans=0;
        cin>>n;
        if(n<=6)
        {
            ans+=15;
        }
        else if(n==7 || n==8)
        {
            ans+=20;
        }
        else
        {
            ans+=(n/10)*25;
            n%=10;
            if(n==1 || n==2) ans+=5;
            else if(n==3 || n==4)
            {
                ans-=5;
                ans+=15;
            }
            else if(n==5 || n==6)
            {
                ans-=5;
                ans+=20;
            }
            else if(n==7 || n==8)
            {
                ans+=20;
            }
            else if(n>8)
            {
                ans+=25;
            }
        }
        cout<<ans<<endl;
    }
}
