#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        map<int,int> count;
        int n;
        cin >> n;
        int c = 0;
        int prev=-1;
        for (int i = 0; i< n; i++){
          int a;
          cin >> a;
          if (prev==-1){
            count[1]++;
            c=1;
            prev=a;
          }else{
            if (a==prev){
              c++;
              count[c]++;
            }else{
              prev=a;
              c=1;
              count[c]++;
            }
          }
        }
        int ans=-1;
        for (int i= 1; i< n+1;i++){
          ans=max(ans,i*count[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
