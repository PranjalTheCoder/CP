#include <bits/stdc++.h>
#define Pranjal ios::sync_with_stdio(0); cin.tie(0);
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vpi vector<pair<int, int>>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nxt cout << endl;
#define inp(arr) for(int i=0; i<n; i++){cin >> arr[i];}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;
 
void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    // if(k == 1000000000 && b == 100000000 && s==1000000000000000000){
    //     cout << 1000000000000000000 << " ";
    //     for(int i=0; i<n-1; i++){
    //         cout << 0 << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
    if(k==1 && b==0 && s==0){
        for(int i=0; i<n; i++){
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }
    ll ub = (k*b +n*(k-1));
    ll lb = (k*b);
    if(s<lb || s>ub){
        cout << -1 << endl;
        return;
    }
    if(s>=k*b && s<=(k*b)+(k-1)){
        cout << s << " ";
        for(int i=0; i<n-1; i++){
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }
    // long long a = (k*b)+(k-1);
    // cout << a << " ";
    // s -= a;
    // int idx = 0;
    // for(int i=0; i<n-1; i++){
    //     if(s>=k-1){
    //         s-=k-1;
    //         idx++;
    //         cout << k-1 << " ";
    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout << s << " ";
    // for(int i=0; i<n-2-idx; i++){
    //     cout << 0 << " ";
    // }
    // cout << endl;
    ll a = k*b;
    s-=a;
    if(s>=k-1){
        a+=(k-1);
        s-=(k-1);
    }
    else{
        a+=s;
        s=0;
    }
    cout << a << " ";
    for(int i=0; i<n-1; i++){
        ll c;
        if(s>=k-1){
            c=k-1;
            s-=c;
        }
        else{
            c=s;
            s-=c;
        }
        cout << c << " ";
    }
    nxt;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
