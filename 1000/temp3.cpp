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
 
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    inp(arr);
    int sum=0;
    int count =0;
    int j=-1;
    int count1=0;
    unordered_map<int, int> mp;
    fox{
        if(arr[i]==0){
            count1++;
        }
    }
    if(count1==n){
        cout << count1 << endl;
        return;
    }
    else{
    fox{
        // count = 0;
        sum+=arr[i];
        if(sum==0){
            count++;
            j=i;
            sum=0;
            // mp.clear();
        }
        else if(mp.find(sum)!=mp.end() && mp[sum]>j){
            count++;
            j=i;
            sum =0;
            // mp.clear();
        }
        mp[sum] = i;
    }
    cout << count << endl;
    }
}

int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}