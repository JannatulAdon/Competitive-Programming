#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define int long long
void test_case() {
  int n; cin >> n;
  vector<int> a(n);
  for(auto &i :a) cin >> i;
  int cur = a[0];
    vector<int> c(n);
    c[0] = cur;
    for(int i = 1;i<n;i++){
      c[i] = c[i-1]+1;
    } 
    int add = 0;
    for(int i = 0;i<n;i++){
      if(c[i] < a[i]){
        add = max(add,a[i]-c[i]);
      }
    }
    for(int i = 0;i<n;i++)c[i] += add;
    set<int> x;
    int ans = 0;
    for(int i = 0;i<n;i++){
      ans = max(ans,c[i]-a[i]);
    }cout << ans << "\n";
}
int32_t main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin >> t;
  while (t--) {
    test_case();
  }
}