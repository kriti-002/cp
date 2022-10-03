#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>


#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()

class Solution{
public:
    void solve(){
        int n;cin>>n;
        ll a[n];f(i,0,n)cin>>a[i];
        ll ans = LONG_LONG_MAX;
        f(p,0,n){
            ll cur = 0ll;
            ll x = 0;
            for(int i=p+1;i<n;i++){
                ll k = x/a[i]+1;
                cur += k;
                x = a[i]*k;
            }
            x = 0;
            for(int i=p-1;i>=0;i--){
                ll k = x/a[i]+1;
                cur += k;
                x = a[i]*k;
            }
            ans = min(ans,cur);
        }
        cout<<ans<<endl;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t;
    Solution ob;
    while(t--){
        ob.solve();
    }
    return 0;
}