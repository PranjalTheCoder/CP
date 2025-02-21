// https://codeforces.com/problemset/problem/1631/B
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
   int x=arr[n-1];
   int idx=-1;
   for(int i=n-2; i>=0; i--){
        if(arr[i]!=x){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout << 0 << endl;
        return;
    }
    int count = 0;
    int i=n-1;
    int cnt=0;
    while(i>=0){
        while(arr[i]==x && i>=0){
            cnt++;
            i--;
        }
        if(i<0) break;
        count++;
        i-=cnt;
        cnt*=2;
    }
    cout << count << endl;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


