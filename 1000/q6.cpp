#include <bits/stdc++.h>
#define Pranjal 
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vpi vector<pair<int, int>>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nxt cout << endl;
#define all arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define ll long long 
using namespace std;
 
void solve() {
   int n, k, q;
   cin >> n >> k >> q;
   vi arr(n);
   fox{
    cin >> arr[i];
   }
   ll count=0, x=0;
//    fox{
//     if(arr[i]<=q){
//         for(int j=i; j<n; j++){
//             if(arr[j]<=q){
//                 if(j-i+1>=k){
//                     count++;
//                 }
//             }
//             else    break;
//         }
//     }
//    }
    for(int i=0; i<n; i++){
        if(arr[i]<=q)
            x++;
        else{
            if(x>=k)
                count += ((x*(x+1))/2 - ((k-1)*x - ((k-2)*(k-1))/2));
            x=0;
        }
    }
    if(x>=k)
        count += ((x*(x+1))/2 - ((k-1)*x - ((k-2)*(k-1))/2));
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