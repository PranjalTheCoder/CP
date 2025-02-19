                                                                                                                                                                                                                                           #include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = accumulate(arr.begin(), arr.end(), arr[0], std::bit_and<int>());
    cout << ans << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}