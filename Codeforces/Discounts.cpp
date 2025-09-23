#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i< n; i++) cin >> nums[i];
        int l=-1,r=-1;
        bool ok=true;
        for (int i = n; i>0; i--){
          if (r==-1){
            for (int p = 0; p < n; p++){
              if (nums[p]==i){
                l=p;
                r=p;
              }
            }
          }else{
            bool moved = false;
            //cout << l << " " << r << " " << nums[l-1] << " " <<nums[r+1] << " " << i <<endl;
            if (r != n-1){
              if (nums[r+1]==i){
                r++;
                //cout << r << " " << i << " " << "r" << endl;
                moved=true;
                continue;
              }
            }
            if (l != 0){
              if (nums[l-1]==i){
                l--;
                //cout << l << " " << i << " " << "l" << endl;
                moved=true;
                continue;
              }
            }
            if (!moved){
              cout << "NO" << endl;
              ok=false;
              break;
            }
          }
        }
        if (ok){
          cout << "YES" << endl;
        }
    }
}
