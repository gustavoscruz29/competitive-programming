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
 
int x, y;
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  if(a[n-1] < a[n-2]){
    cout << "-1\n";
    return;
  }
  if((a[n-2] - a[n-1]) <= a[n-2]){
    cout << (n-2) << "\n";
    REP(i,0,n-2){
      cout << (i+1) << " " << n-1 << " " << n << "\n";
    }
  }
  else{
    REP(i,1,n){
      if(a[i] < a[i-1]){
        cout << "-1\n";
        return;
      }
    }
    cout << "0\n";
  }
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
