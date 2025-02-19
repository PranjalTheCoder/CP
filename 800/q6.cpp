#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   if(n == 2){
    cout << "YES" << endl;
    return;
   }
   unordered_map<int, int> mpp;
   for(int i=0; i<n; i++){
    mpp[arr[i]]++;
   }
   if(mpp.size() > 2){
        cout << "NO" << endl;
        return;
   }
   if(mpp.size() == 2){
    int t = begin(mpp)->second;
    if(t != n/2 && t != (n+1)/2){
        cout << "NO" << endl;
        return;
    }
   }
   cout << "Yes" << endl;
   return;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}