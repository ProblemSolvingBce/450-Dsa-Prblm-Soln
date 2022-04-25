#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithms

#define ll long long int
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,maxi=INT_MIN,sum=0;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)
        cin>>it;
    for(auto it:v){
        sum+=it;
        maxi=max(sum,maxi);
        if(sum<0)
            sum=0;
    }
    cout<<maxi;
}

// time complexity: O(N) | Space complexity: O(1)
/*Input:
4
-1 -2 -3 -4
5
1 2 3 -2 5

output:
-1
9
*/
