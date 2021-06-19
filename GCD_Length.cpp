#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <chrono>
#include <iomanip>
#include <vector>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <utility>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
 
// using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int
#define nl cout<<"\n";
#define pb push_back
#define mp make_pair
#define A first
#define B second
#define lb long double
#define vecin(v,n,x) for(ll i=0;i<n;i++){  cin>>x; v.pb(x);}
#define vecout(v) for(auto itr:v) cout<<itr<<" ";nl
#define oset tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
#define setpre(x) cout<<setprecision(x)<<fixed
#define mn LONG_LONG_MIN
#define mx LONG_LONG_MAX
#define N 1000000
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<1;
    for(int i=1;i<=a-1;i++)
    	cout<<0;
    cout<<" ";
    for(int i=1;i<=b-c+1;i++)
    	cout<<1;
    for(int i=1;i<=c-1;i++)
    	cout<<0;

    nl
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("error.txt","w",stderr);
    #endif
    
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}