#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    bool flag = true;
    int count;
    for(int i=0; i<6; i++){
        if(x.find(s) != string::npos){
            count = i;
            flag = false;
            break;
        }
        x.append(x);
    }
    if(flag)
        cout << -1 << endl;
    else
        cout << count << endl;
   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}