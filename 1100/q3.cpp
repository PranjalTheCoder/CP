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
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<pair<pair<int, int>, int>> nums(n);
    for(int i=0; i<n; i++){
        nums[i].first.first = arr[i];
        nums[i].second = i;
    }
    sort(nums.begin(), nums.end());
    vector<ll> pri(n, 0);
    pri[0]=nums[0].first.first;
    for(int i=1; i<n; i++){
        pri[i] += pri[i-1] + nums[i].first.first;
    }
    // cout << "pri is: ";
    // for(auto it: pri){
    //     cout << it << " ";
    // }
    // cout << endl;
    for(int i=0; i<n; i++){
        ll sum = pri[i];
        int count = i;
        for(int j=i+1; j<n; j++){
            if(sum>=nums[j].first.first){
                count++;
                sum += nums[j].first.first;
            }
            else{
                break;
            }
        }
        nums[i].first.second=count;
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(arr[i]==nums[j].first){
    //             arr[i] = nums[j].second;
    //         }
    //     }
    // }
    for(int i=0; i<n; i++){
        arr[nums[i].second]=nums[i].first.second;
    }
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;

}
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}