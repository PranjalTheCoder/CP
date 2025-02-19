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
#define inp(brr) for(int i=0; i<n; i++){cin >> brr[i];}
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vi arr(n), brr(q);
    inp(arr);
    for(int i=0; i<q; i++){
        cin >> brr[i];
    }
    int count = INT_MAX;
    for(int i=0; i<q; i++){
        if(count>brr[i]){
            int di = pow(2, brr[i]);
            for(int j=0; j<n; j++){
                if(arr[j]%di==0){
                    arr[j]+=pow(2, brr[i]-1);
                }
            }
            count = brr[i];
        }
    }
    fox{
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}