#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    //  n = str.length();
    bool flag = false;
    for(int i=1; i<n-1; i++){
        if(str[i] == '.' && str[i-1] == '.' && str[i+1] == '.'){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << 2 << endl;
        return;
    }
    else{
        int count = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '.')
                count++;
        }
        cout << count << endl;
    }
    // return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}