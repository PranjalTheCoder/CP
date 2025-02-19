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
    ll a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    else if(a<b){
        if(b%a!=0){
            cout << -1 << endl;
            return;
        }
        ll t = b/a;
        ll count = 0;
        while(t){
            if(t==1){
                cout << count << endl;
                return;
            }
            if(t%8==0){
                count++;
                t/=8;
            }
            else if(t%4==0){
                count++;
                t/=4;
            }
            else if(t%2==0){
                count++;
                t/=2;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
    }
    else{
        if(a%b!=0){
            cout << -1 << endl;
            return;
        }
        ll t = a/b;
        ll count = 0;
        while(t){
            if(t==1){
                cout << count << endl;
                return;
            }
            if(t%8==0){
                count++;
                t/=8;
            }
            else if(t%4==0){
                count++;
                t/=4;
            }
            else if(t%2==0){
                count++;
                t/=2;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
    }
    
}

int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}