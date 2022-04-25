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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v)
        cin>>i;

    ll low=0,high=n-1;
    while(low<high){
        if(v[low]<0)
            low++;
        else if(v[high]>0)
            high--;
        else
            swap(v[low],v[high]);
    }

    for(auto it:v)
        cout<<it<<" ";
}

//time complexity: O(N) | space complexity: O(1)
