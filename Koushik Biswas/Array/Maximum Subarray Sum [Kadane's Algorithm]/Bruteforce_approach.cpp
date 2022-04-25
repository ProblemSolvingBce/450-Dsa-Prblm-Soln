#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans=INT_MIN;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)
        cin>>it;
    
    for(ll i=0;i<n;i++){
        for(ll j=i;j<n;j++){
            ll sum=0;
            for(ll k=i;k<=j;k++){
                sum+=v[k];
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}

// time complexity: O(n^3)
