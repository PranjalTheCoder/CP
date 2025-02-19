#include<bits/stdc++.h>
using namespace std;
void solve(int m, vector<int>& a){
    vector<int> arr;
    arr.push_back(a[0]);
    for(int i=1; i<m; i++){
        if(a[i] >= a[i-1]){
            arr.push_back(a[i]);
        }
        else{
            arr.push_back(a[i]);
            arr.push_back(a[i]);
        }
    }
    // 4,6,3
    // 4,6,3,3
    // 4,6,2,3
    int n = arr.size();
    cout << n << endl;
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int m;
    cin >> m;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    solve(m, a);
    }
}