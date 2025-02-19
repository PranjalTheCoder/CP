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
   if(!(n%2)){
       cout << n/2 << " " << n/2 << endl;
   }
   else{
       for(ll i=2; i*i<=n; i++){
           if(!(n%i)){
               cout << n/i << " " << n-(n/i) << endl;
               return;
           }
       }
       cout << 1 << " " << n-1 << endl;
   }
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
