#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    string s = to_string(n);
    int m = s.length();
    int count = 0;
        int x=-1,y=-1;
        int counta=0, countb=0;
        for(int i=m-1; i>0; i--){
            if(s[i]=='0'){
                x=i;
                break;
            }
            counta++;
        }
        for(int i=m-1; i>0; i--){
            if(s[i]=='5'){
                y=i;
                break;
            }
            countb++;
        }
        if(x!=-1){
            for(int i=x-1; i>=0; i--){
                if(s[i]=='0' || s[i]=='5')
                    break;
                counta++;
            }
        }
        if(y!=-1){
            for(int i=y-1; i>=0; i--){
                if(s[i]=='2' || s[i]=='7')
                    break;
                countb++;
            }
        }
        if(x==-1){
            count = countb;
        }
        else if(y==-1){
            count = counta;
        }
        else{
            count = min(counta, countb);
        }
    cout << count << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}