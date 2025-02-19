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
#define all(arr) arr.begin(), arr.end()
#define all(brr) brr.begin(), brr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;
 
void solve() {
   int n;
   cin >> n;
   vi arr(n), brr(n);
   inp(arr);
   inp(brr);
//    vi ans;
//    ans = arr + brr;
//    int maxi=0,x=0;
//    for(int i=0; i<2*n-1; i++){
//        if(ans[i] == ans[i+1]){
//            x++;
//        }
//        else{
//            maxi = max(maxi, x);
//            x=0;
//        }
//    }
//    ans.clear();
//    bool f1 = true;
//    for(int i=0; i<2*n; i++){
//        if(f1){
//            int el = arr[0];
//            arr.erase(all(arr), 0);
//            arr.pb(el);
//            f1 = false;
//        }
//        else{
//            int el = brr[0];
//            brr.erase(all(brr), 0);
//            brr.pb(el);
//            f1 = true;
//        }
//        ans = arr+brr;
//        x=0;
//        for(int i=0; i<2*n-1; i++){
//        if(ans[i] == ans[i+1]){
//            x++;
//        }
//        else{
//            maxi = max(maxi, x);
//            x=0;
//        }
//    }
//    }
//    cout << maxi << endl;
    set<int> st;
    for(auto it: arr){
        st.insert(it);
    }
    for(auto it: brr){
        st.insert(it);
    }
    map<int, int> mp1, mp2;
    int count = 1;
    mp1[arr[0]] = 1;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1])    count++;
        else    count =1;
        mp1[arr[i]] = max(mp1[arr[i]], count);
    }
    mp2[brr[0]] = 1;
    count = 1;
    for(int i=1; i<n; i++){
        if(brr[i] == brr[i-1])  count++;
        else    count = 1;
        mp2[brr[i]] = max(mp2[brr[i]], count);
    }
    int ans = 1;
    for(auto it : st){
        ans = max(ans, mp1[it] = mp2[it]);
    }
    cout << ans << endl;
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
