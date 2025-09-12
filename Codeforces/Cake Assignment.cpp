#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i< t; i++){
      long long k,x;
      cin >> k >> x;
      long long y = (1LL << (k+1)) - x;
      vector<long long> ans;
      long long c=0;
      while (x != y){
        //cout << x << " " << y << endl;
        long long small = min(x,y);
        c++;
        if (small==x){
          x*=2;
          y-=x/2;
          ans.push_back(1);
        }else{
          y*=2;
          x-=y/2;
          ans.push_back(2);
        }
        
        
      }
      cout << c << endl;
      while (!ans.empty()) cout << ans.back() << " ",ans.pop_back();
      cout << endl;
    }
 
}
