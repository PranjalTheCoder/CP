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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    fox{
        cin >> arr[i];
    }
    int count = 0;
    vector<pair<int, int>> nums(n);
    for(int i=0; i<n; i++){
        nums[i].first = arr[i]-x;
        nums[i].second = arr[i]+x;
        // if(nums[i].first < 0){
        //     nums[i].first = 0;
        // }
    }
    // for(int i=0; i<n; i++){
    //     cout << nums[i].first <<"->" << nums[i].second << " ";
    // }
    // cout << endl;
    x=nums[0].first;
    int y = nums[0].second;
    for(int i=1; i<n; i++){
        if(y>=nums[i].first && x<=nums[i].second){
            x = max(x, nums[i].first);
            y = min(y, nums[i].second);
        }
        else{
            count++;
            x= nums[i].first;
            y= nums[i].second;
        }
        // x = max(x, nums[i].second);
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
