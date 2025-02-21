//https://codeforces.com/problemset/problem/1899/C

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
    int n,q;
    cin >> n >> q;
    vi arr(n), brr(q);
    inp(arr);
    for(int i=0; i<q; i++){cin >> brr[i];};
    vi hash(51, -1);
    for(int i=0; i<n; i++){
        int it=arr[i];
        if(hash[it]==-1)    hash[it]=i+1;
    }
    vi nums;
    for(int i=0;i<q;i++){
        int x=hash[brr[i]];
        nums.pb(x);
        for(int j=0; j<51; j++){
            if(hash[j]!=-1 && hash[j]<x)
                hash[j]++;
        }
        hash[brr[i]]=1;
    }
    for(auto it: nums)
        cout << it << " ";
    cout << "\n";
    }
 
int main() {
    Pranjal;
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
}


