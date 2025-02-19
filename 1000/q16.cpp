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
    int n, a, b;
    cin >> n >> a >> b;
    if(b==0){
        string s;
        while(a){
            s.pb('R');
            a--;
        }
        cout << s << endl;
        return;
    }
    if(b==1){
        string s;
        int t=a/2;
        a = a-t;
        while(t){
            s.pb('R');
            t--;
        }
        s.pb('B');
        while(a){
            s.pb('R');
            a--;
        }
        cout << s << endl;
        return;
    }
    string s;
    int t=(a/(b+1));
    int rem = a%(b+1);
    int v = b+1;
    int i=0;
    while(v){
        s+=string(t, 'R');
        if(rem>0){
            s+="R";
            rem--;
        }
        if(i<b){
            s+='B';
        }
        i++;
        v--;
    }
    // while(rem){
    //     s+="R";
    //     rem--;
    // }
    cout << s << endl;
    return;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}