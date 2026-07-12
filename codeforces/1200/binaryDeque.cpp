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
 
void solve(){
  int n, s; cin >> n >> s;
  
  vector<int> a(n);
  
  for(auto &e : a) cin >> e;
  
  int len = -1;
  
  map<int,int> mp;
  
  mp[0] = -1;
  
  int sum = 0;
  
  REP(i,0,n){
    sum += a[i];
    if(mp.count(sum - s))
      len = max(len, i - mp[sum-s]);
      
    if(!mp.count(sum))
      mp[sum] = i;
  }
  if(len == -1)
    cout << "-1\n";
  else
    cout << n - len << "\n";
}
 
int main(){
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
