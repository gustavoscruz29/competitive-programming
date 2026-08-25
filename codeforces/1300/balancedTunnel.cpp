#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
int main() {
  fast_io
  int n; cin >> n;
  vector<int> a(n), b(n);
  map<int,int> mp;
  REP(i,0,n){
    cin >> a[i];
    mp[a[i]] = i;
  }
  vector<int> c(n,0);
  REP(i,0,n){
    cin >> b[i];
    c[mp[b[i]]] = i;
  }
  int mx = c[0], ans = 0;
  REP(i,1,n){
    if(c[i] < mx) ans++;
    mx = max(mx,c[i]);
  }
  cout << ans << endl;
  return 0;
}
