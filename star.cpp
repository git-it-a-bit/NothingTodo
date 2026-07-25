#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define ll long long
// loops
#define fl(i,a,b) for(int i=a;i<b;i++)
#define flr(i,a,b) for(int i=a-1;i>=b;i--)
//data structures
#define vi vector<int>
#define pb push_back
#define vvi vector<vector<int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define si set<int>
#define sc set<char>
#define mii map<int,int>
#define mci map<char,int>
#define msi map<string,int>
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
template <typename T>
using ordered_set= tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//cout << *(o_set.find_by_order(1))
//cout << o_set.order_of_key(4)
//algorithms
#define Sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())
#define Insert(a)  insert(a.begin(),a.end())
#define input(a,n) fl(i,0,n){ cin>> a[i];}
#define print(a) for(auto x:a){cout<<x<<" ";} cout<<endl;
#define printmap(m,s) for(auto x:s){cout<<x<<"-->"<<m[x]<<endl;}
#define buildmap(m,v) for(auto x:v){m[x]++;} 
//helpers
#define ff first
#define ss second
#define cY cout<<"YES"<<endl
#define cN cout<<"NO"<<endl
#define cT cout<<"true"<<endl
#define cF cout<<"false"<<endl
#define op(x) cout<<x<<" ";
#define all(a) a.begin(),a.end()
#define INT_MAX 1e18
#define nln cout<<endl
#define w(t) int t; cin>>t; while(t--)
#define ios ios_base::sync_with_stdio(0);cin.tie(NULL);


//cout <<fixed <<setprecision(5) << result <<endl;
int mod=1e9+7;
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

signed main(){
    ios
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
   
}
