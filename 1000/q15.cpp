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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int mini = INT_MAX, x=0;
    for(int i=0; i<k; i++){
        if(s[i]=='W')
            x++;
    }
    mini = x;
    int st=0;
    int e=k;
    while(e<n){
        if(s[st]=='W')  x--;
        if(s[e] =='W')  x++;
        st++;
        e++;
        mini=min(x, mini);
    }
    // for(int i=0; i<=n-k; i++){
    //     int x = 0;
    //     for(int j=i; j<i+k; j++){
    //         if(s[j]=='W'){
    //             x++;
    //         }
    //     }
    //     mini = min(mini, x);
    // }
    cout << mini << endl;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}