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
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;


void solve() {
   int n, m;
   cin >> n >> m;
   vector<int> arr(n), brr(m);
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   for(int i=0; i<m; i++){
    cin >> brr[i];
   }
   unordered_set<int> mp;
   for(int i=0; i<m; i++){
    mp.insert(brr[i]);
   }
   bool f1= false;
   for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            if(!f1){
                int x = arr[i];
                if(i-1>=0){
                    x=arr[i-1]+arr[i];
                }
                int y = arr[i+1]+arr[i];
                bool f2=false;
                for(int j=x; j<=y; j++){
                    if(mp.find(j)!=mp.end()){
                        f2=true;
                        break;
                    }
                }
                if(!f2){
                    cout << "NO" << endl;
                    return;
                }
                f1=true;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
   }
   cout << "YES" << endl;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}