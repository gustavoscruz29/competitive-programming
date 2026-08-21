#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
vector<int> a;
 
bool check(int k, int h){
  vector<int> b(k);
  REP(i,0,k) b[i] = a[i];
  sort(b.begin(),b.end());
  for(int i = k - 1; i >= 0; i-=2){
    if(b[i] > h) return false;
    h -= b[i];
  }
  return true;
}
 
int main(){
  fast_io
  int n, h; cin >> n >> h;
  a = vector<int>(n);
  for(auto &e : a) cin >> e;
  int l = 1, r = n;
  int mid = 0;
  int ans = 1;
  while(l <= r){
    mid = l + (r - l) / 2;
    if(check(mid,h)){
      ans = mid;
      l = mid + 1;
    }
    else r = mid - 1;
  }
  
  cout << ans << '\n';
  
  return 0;
}
