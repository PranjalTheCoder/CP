#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    // for(int i=1; i<=k; i++){
    //     if(n%2)
    //         n+=i;
    //     else
    //         n-=i;
    // }
    // cout << n << endl;
    ll x=0;
    if(k%4==0)  x=0;
    else if (k%4==1)    x=-k;
    else if (k%4==2)    x=1;
    else if (k%4==3)    x=k+1;
    if(n%2)
        cout << n-x << endl;
    else
        cout << n+x << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*
    0   -k  1   k+1

    0   1   2   3
    0   -1  1   4

    4   5   6   7
    0   -5  1   8

    8   9  10   11
    0  -9   1   12

    12  13  14  15
    0  -13  1   16
*/
