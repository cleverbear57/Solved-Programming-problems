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
        vector<long long> nums(n);
        for (int i = 0; i< n; i++) cin >> nums[i];
        sort(nums.begin(),nums.end());
        long long ans=-1;
        for (int i = 0;i < n; i+=2){
          ans=max(ans,nums[i+1]-nums[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
