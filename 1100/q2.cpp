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
    int n, k;
    cin >> n >> k;
    vi arr(n), brr(n);
    inp(arr);
    inp(brr);
    int sum = 0;
    int maxi = 0;
    int ans=0;
    for(int i=0; (n>=k)?(i<k):(i<n); i++){
        sum += arr[i];
        maxi = max(maxi, brr[i]);
        int c =(k-(i+1));
        ans = max(ans,sum+c*maxi);
    }
    // int m = k;
    // for(int i=0; i<min(n, k); i++){
    //     sum += arr[i];
    //     m--;
    // }
    // maxi = max(maxi, sum);
    // // cout << sum << endl;
    // if(k>=n){
    //     if(m>0){
    //         ll c=0;
    //         int maxele = *max_element(brr.begin(), brr.end());
    //         c += m*maxele;
    //         maxi = max(maxi, c+sum);
    //     }
    //     m=k-n;
    //     for(int i=n-1; i>0; i--){
    //         sum -= arr[i];
    //         m++;
    //         ll c=0;
    //         int x=0;
    //         for(int j=0; j<i; j++){
    //             x=max(x, brr[j]);
    //         }
    //         c += m*x;
    //         // cout << sum << "+" << m << "*" << x << "->" << c+sum << "  " << maxi << endl;
    //         maxi = max(maxi, sum+c);
    //     }
        
        
    // }
    // else if(k<n){
    //     maxi = max(maxi, sum);
    //     m=0;
    //     for(int i=k-1; i>=1; i--){
    //         sum -= arr[i];
    //         m++;
    //         ll c=0;
    //         int x=0;
    //         for(int j=0; j<i; j++){
    //             x=max(x, brr[j]);
    //         }
    //         c += m*x;
    //         // cout << sum << "+" << m << "*" << x << "->" << c+sum << "  " << maxi << endl;
    //         maxi = max(maxi, sum+c);
    //     }
    // }
    
    cout << ans << endl;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}