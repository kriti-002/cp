#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<int>
#define vvi vector<vi>

#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int l=-1,r=-1;
    if(s==string(n,'a') or s==string(n,'b')){
        cout<<"-1 -1"<<endl;
        return ;
    }
    f(i,0,n){
        int a=0,b=0;
        f(j,i,n){
            if(s[j]=='a'){
                a++;
            }else{
                b++;
            }
            if(a==b){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}