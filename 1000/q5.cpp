#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve() {
    int n, k;
    cin >>n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i]%k;
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i] =k;
        }
    }
    vector<pair<int, int>> ap(n);
    for(int i=0; i<n; i++){
        ap[i].first = arr[i];
        ap[i].second = i+1;
        // cout << ap[i].first << "->" << ap[i].second << " ";
    }
    // cout << endl << endl;
    auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) 
            return a.second < b.second;
        return a.first > b.first;
    };
    sort(ap.begin(), ap.end(), cmp);
    // for(int i=0; i<n; i++){
    //     cout << ap[i].first << "->" << ap[i].second << " ";
    // }
    // cout << endl << endl;
    for(int i=0; i<n; i++){
        cout << ap[i].second << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}