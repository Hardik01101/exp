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

using namespace std;
 
#define ll long long int
#define nl cout<<"\n";
#define pb push_back
#define mp make_pair
#define A first
#define B second
#define lb long double



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
