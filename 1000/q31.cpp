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
    int n;
    cin >> n;
    string s;
    cin >> s;
    // int i=0, j=n-1;
//    for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(s[i]>s[j]){
//                 yes;
//                 cout << i+1 << " " << j+1 << endl;
//                 return;
//             }
//         }
//     }
    for(int i=0; i<n-1; i++){
        if(s[i]>s[i+1]){
            cout << "YES" << endl;
            cout << i+1 << " " << i+2 << endl;
            return;
     }
    }
    no;
}

int main() {
    Pranjal;
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
}