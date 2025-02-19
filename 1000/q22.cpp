#include <bits/stdc++.h>
#define Pranjal ios::sync_with_stdio(0); cin.tie(0);
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vpi vector<pair<int, int>>
#define count_1(n) __builtin_popcountint(n)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nxt cout << endl;
#define inp(arr) for(int i=0; i<n; i++){cin >> arr[i];}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;
const int MOD = 1e9 + 7;
 
void solve() {
    int a, b;
    cin >> a >> b;
    int count = INT_MAX;
    if(a==b){
        cout << 2 << endl;
        return;
    }
    if(a<b){
        cout << 1 << endl;
        return;
    }
    int counta=0;
    if(b==1){
        b++;
        counta++;
    }
    int n = a;
    for(int i=b; i<=a; i++){
        int countb=i-b;
        n=a;
        while(n>=i){
            n=n/i;
            countb++;
        }
        if(n>0){
            countb++;
            n=0;
        }
        int k = counta + countb;
        if(count<k)
            break;
        count = k;
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