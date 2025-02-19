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
    int n;
    cin >> n;
    vector<int> arr(n);
    fox{
        cin >> arr[i];
    }
    vector<pair<int,int>> brr(n);
    fox{
        brr[i].first = arr[i];
        brr[i].second = i+1; 
    }
    sort(brr.begin(), brr.end(), 
        [](const pair<int,int>&a, const pair<int, int>&b){
            return a.first < b.first;
        });
    reverse(brr.begin(), brr.end());
    int x=1;
    ll ans = 0;
    for(int i=0; i<n; i+=2){
        ll t1 = (ll)brr[i].first * x;
        ll t2 = 0;
        if(i+1<n)
            t2  = (ll)brr[i+1].first * x;
        ans += (t1+t2);
        x++;
    }
    ans *= 2;
    cout << ans << endl;
    // fox{
    //     cout << brr[i].first << "->" << brr[i].second << " ";
    // }
    // nxt;
    int mid = n/2+1;
    vector<pair<pair<int, int>, int>> crr(n);
    x=1;
    for(int i=0; i<n; i+=2){
        crr[i].first.first = brr[i].first;
        crr[i].first.second = brr[i].second;
        crr[i].second = mid + x;
        x++;
    }
    x=1;
    for(int i=1; i<n; i+=2){
        crr[i].first.first = brr[i].first;
        crr[i].first.second = brr[i].second;
        crr[i].second = mid - x;
        x++;
    }
    // fox{
    //     cout << crr[i].first.first << "->" << crr[i].first.second << "->" << crr[i].second << " ";
    // }
    // nxt;
    sort(crr.begin(), crr.end(), 
        [](const pair<pair<int, int>, int>&a, const pair<pair<int, int>, int>&b){
            return a.first.second < b.first.second;
        });
    // fox{
    //     cout << crr[i].first.first << "->" << crr[i].first.second << "->" << crr[i].second << " ";
    // }
    // nxt;
    cout << mid << " ";
    fox{
        cout << crr[i].second << " ";
    }
    // nxt;
    
    nxt;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}