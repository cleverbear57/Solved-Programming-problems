#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int negs=0;
        int zeros=0;
        for (int i = 0; i< n; i++){
          int a;
          cin >> a;
          if (a==-1){
            negs++;
          }else if (a==0){
            zeros++;
          }
        }
        cout << 2*(negs%2) + zeros << endl;
    }
    return 0;
}

