#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k==n-1){
        cout << "YES" << endl;
        return;
    }
    vector<int> arr(26, 0);
    for(int i=0; i<n; i++){
        arr[s[i]-'a']++;
    }
    
    int count = 0;
    for(int i=0; i<26; i++){
        if(arr[i]%2)
            count++;
    }
    // int c = n-k;
    if(k<count-1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    // if(n%2==0){
    //     if(k==count){
    //         n -= k;
    //         if(n%2 == 0)
    //             cout << "YES" << endl;
    //         else
    //             cout << "NO" << endl;
    //         return;
    //     }
    //     else if(k>count){
    //         k-=count;
    //         n-=count;
    //         if((k%2==0 && n%2==0) || (k%2==1 && n%2==1)){
    //             cout << "YES" << endl;
    //             return;
    //         }
    //         else{   
    //             cout << "YES" << endl;
    //             return;
    //         }
    //     }
    //     else{
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // else{
    //     if(k==count){
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     else if(k>count){
    //         k-=count;
    //         if(k%2==0){
    //             cout << "NO" << endl;
    //         }
    //         else{
    //             cout <<"YES" << endl;
    //         }
    //     }
    //     else{
    //         count -= k;
    //         if(count == 1){
    //             cout << "YES" << endl;
    //         }
    //         else{
    //             cout << "NO" << endl;
    //         }
    //     }
    // }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
