#include<bits/stdc++.h>
using namespace std;

void solve(){
//    int a, b, c;
//    cin >> a >> b >> c;
//    if(c!=1){
//     cout << "YES" << endl;
//     cout << a << endl;
//     for(int i=0; i<a; i++){
//         cout << 1 << " ";
//     }
//     cout << endl;
//    }
//    else{
//     if(b==1){
//         cout <<"NO" <<endl;
//         return;
//     }
//     else if(b==2 && a%2==1){
//         cout << "NO" << endl;
//         return;
//     }
//     else{
//         cout << "YES" << endl;
//     cout << a/2 << endl;
//     for(int i=0; i<a/2; i++){
//         cout << 2 << " ";
//     }
//     cout << endl;
//     }
// /   
    int n, k, x;
    cin >> n >> k >> x;
    if(x != 1){
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=0; i<n; i++){
            cout << 1 << " ";
        }
        cout << endl;
    }
    else{
        if(k>=2 && n%2==0){
            cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i=0; i<n/2; i++){
                cout << 2 << " ";
            }
            cout << endl;
        }
        else if(k>=3 && n%2==1){
            cout << "YES" << endl;
            n = n-3;
            cout << n/2+1 << endl;
            for(int i=0; i<n/2; i++){
                cout << 2 << " ";
            }
            
            cout << 3 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}