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
#define inp(brr) for(int i=0; i<n; i++){cin >> brr[i];}
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n=s.length();
    int count = 0;
    set<char> st;
    for(auto it: s){
        st.insert(it);
    }
    int k=st.size();
    set<char> stt;
    for(auto it: st){
        stt.insert(it);
    }
    int j =0;
    int w=k;
   while(w!=n+1){
       if(stt.size()<k){no;return;}
       stt.erase(s[j]);
       stt.insert(s[k+j]);
       j++;
       w++;
   }
   yes;
}
    
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


