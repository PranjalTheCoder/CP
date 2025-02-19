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
    ll n;
    cin >> n;
    while(1){
        // vector<int> arr;
        ll m = n;
        bool f1 = false;
        while(m){
            int t = m%10;
            if(t!=0 && n%t!=0){
                f1 = true;
                break;
            }
            m=m/10;
        }
        
        // for(int i=0; i<arr.size(); i++){
        //     if(n%arr[i]!=0){
        //         f1 = true;
        //     }
        // }
        if(f1)
            n++;
        else{
            cout << n << endl;
            return;
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