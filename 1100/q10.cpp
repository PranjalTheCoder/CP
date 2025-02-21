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
   int n;
   cin >> n;
   vi arr(n);
   inp(arr);
   int sum=0;
   int maxi=INT_MIN;
   fox{
    if(i && (abs(arr[i-1]%2)==abs(arr[i]%2)))
        sum=0;
    if(sum<0)   sum=0;
    maxi=max(maxi, sum+arr[i]);
    sum+=arr[i];
   }
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

