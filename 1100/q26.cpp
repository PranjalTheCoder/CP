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
    int l=0, r=n-1, x=arr[l], y=arr[r];
    int maxi=0;
    while(l<r){
        if(x==y)
            maxi=max(maxi, (l+1)+(n-r));
        if(x<=y){
            l++;
            if(l<r)
                x+=arr[l];
        }
        else{
            r--;
            if(r>l)
                y+=arr[r];
        }
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


