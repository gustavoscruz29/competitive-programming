#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int main() {
  fast_io
  int n; cin >> n;
  ll k, x; cin >> k >> x;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  sort(a.begin(), a.end());
  vector<ll> dif;
  REP(i,0,n-1){
    if(a[i+1] - a[i] > x)
      dif.pb((a[i+1] - a[i] - 1) / x);
  }
  int groups = dif.size() + 1;
  sort(dif.begin(), dif.end());
  REP(i,0,(int)dif.size()){
    if(dif[i] <= k){
      groups--;
      k -= dif[i];
    }
    else break;
  }
  cout << groups << "\n";
  
  return 0;
}
