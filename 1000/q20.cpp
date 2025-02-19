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
 
vi arr(3e5+10);
void solve() {
    int a, b;
    cin >> a >> b;
    int x = arr[a-1];
    if(x==b)
        cout << a << endl;
    else{
        if((x^b)!=a)
            cout <<a+1 << endl;
        else
            cout <<a+2<<endl;
    }
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    arr[0] = 0;
    for(int i=1; i<arr.size(); i++){
        arr[i] = arr[i-1]^i;
    }
    while (t--) {
        solve();
    }
}