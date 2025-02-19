// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;

// void solve(){
//     ll a, b;
//     cin >> a >> b;
//     ll xk, yk;
//     cin >> xk >> yk;
//     ll xq, yq;
//     cin >> xq >> yq;
//     if(a==b){
//         vector<pair<ll, ll>> arr(4), brr(4);
//         ll count = 0;
//         arr[0].first = xk+a;arr[0].second = yk+b;
//         arr[1].first = xk+a;arr[1].second = yk-b;
//         arr[2].first = xk-a;arr[2].second = yk-b;
//         arr[3].first = xk-a;arr[3].second = yk+b;
//         brr[0].first = xq+a;brr[0].second = yq+b;
//         brr[1].first = xq+a;brr[1].second = yq-b;
//         brr[2].first = xq-a;brr[2].second = yq-b;
//         brr[3].first = xq-a;brr[3].second = yq+b;
        
//         for(int i=0; i<4; i++){
//             for(int j=0; j<4; j++){
//                 if(i!=j){
//                     if(arr[i].first == arr[j].first && arr[i].second == arr[j].second){
//                         arr[j].first = -1e9;
//                         arr[j].second = -1e9;
//                     }
//                 }
//             }
//         }
//         for(int i=0; i<4; i++){
//             for(int j=0; j<4; j++){
//                 if(i!=j){
//                     if(brr[i].first == brr[j].first && brr[i].second == brr[j].second){
//                         brr[j].first = -1e8;
//                         brr[j].second = -1e8;
//                     }
//                 }
//             }
//         }

//         // for(int i=0; i<4; i++){
//         //     cout << arr[i].first << "->" << arr[i].second << " ";
//         // }
//         // cout << endl;
//         // for(int i=0; i<4; i++){
//         //     cout << brr[i].first << "->" << brr[i].second << " ";
//         // }
//         // cout << endl;

//        for(int i = 0; i < 4; i++){
//             for(int j = 0; j < 4; j++){
//                 if(arr[i].first == brr[j].first && arr[i].second == brr[j].second){
//                     count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
//     else{
//         vector<pair<ll, ll>> arr(8), brr(8);
//         ll count = 0;
//         arr[0].first = xk+a;arr[0].second = yk+b;
//         arr[1].first = xk+a;arr[1].second = yk-b;
//         arr[2].first = xk-a;arr[2].second = yk-b;
//         arr[3].first = xk-a;arr[3].second = yk+b;
//         arr[4].first = xk+b;arr[4].second = yk+a;
//         arr[5].first = xk+b;arr[5].second = yk-b;
//         arr[6].first = xk-b;arr[6].second = yk-a;
//         arr[7].first = xk-b;arr[7].second = yk+a;
//         brr[0].first = xq+a;brr[0].second = yq+b;
//         brr[1].first = xq+a;brr[1].second = yq-b;
//         brr[2].first = xq-a;brr[2].second = yq-b;
//         brr[3].first = xq-a;brr[3].second = yq+b;
//         brr[4].first = xq+b;brr[4].second = yq+a;
//         brr[5].first = xq+b;brr[5].second = yq-a;
//         brr[6].first = xq-b;brr[6].second = yq-a;
//         brr[7].first = xq-b;brr[7].second = yq+a;
        
//         for(int i=0; i<8; i++){
//             for(int j=0; j<8; j++){
//                 if(i!=j){
//                     if(arr[i].first == arr[j].first && arr[i].second == arr[j].second){
//                         arr[j].first = -1e9;
//                         arr[j].second = -1e9;
//                     }
//                 }
//             }
//         }
//         for(int i=0; i<8; i++){
//             for(int j=0; j<8; j++){
//                 if(i!=j){
//                     if(brr[i].first == brr[j].first && brr[i].second == brr[j].second){
//                         brr[j].first = -1e8;
//                         brr[j].second = -1e8;
//                     }
//                 }
//             }
//         }
        
//         // for(int i=0; i<8; i++){
//         //     cout << arr[i].first << "->" << arr[i].second << " ";
//         // }
//         // cout << endl;
//         // for(int i=0; i<8; i++){
//         //     cout << brr[i].first << "->" << brr[i].second << " ";
//         // }
//         // cout << endl;

//         for(int i = 0; i < 8; i++){
//             for(int j = 0; j < 8; j++){
//                 if(arr[i].first == brr[j].first && arr[i].second == brr[j].second){
//                     count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    
    int count = 0;

    vector<pair<int, int>> arr = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    set<pair<int, int>> st1, st2;
    for(auto it: arr){
        st1.insert(make_pair(xk+it.first, yk+it.second));
        st2.insert(make_pair(xq+it.first, yq+it.second));
    }
    for(auto it: st1){
        if(st2.find(it) != st2.end())
            count++;
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
