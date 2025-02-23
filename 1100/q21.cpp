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
#define debug(a) for(int i=0; i<(int)a.size(); i++){cout << a[i] << " ";} cout << endl;
using namespace std;
const int mod = 1e9+7;

vi arr[1001];
void solve(){
   int n;
   cin >> n;
   vi arr(n);
   inp(arr);
    set<int> st;
    vpi brr;
    for(int i=n-1; i>=0; i--){
        if(!st.count(arr[i])){
            brr.pb({arr[i], i});
            st.insert(arr[i]);
        }
    }
    bool f1=false;
    int maxi = INT_MIN;
    for(int i=0; i<brr.size(); i++){
        int ai=brr[i].first;
        for(int j=i; j<brr.size(); j++){
            int bi=brr[j].first;
            if(__gcd(ai, bi)==1){
                int count=brr[i].second+brr[j].second+2;
                maxi=max(maxi, count);
            }
        }
    }
    if(maxi==INT_MIN)
        cout << -1 << endl;
    else
        cout << maxi << endl;
}
    
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


