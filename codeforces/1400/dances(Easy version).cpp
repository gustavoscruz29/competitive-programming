#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  int n, m; cin >> n >> m;
  vector<int> a(n), b(n);
  a[0] = 1;
  REP(i,1,n) cin >> a[i];
  for(auto &e : b) cin >> e;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int i = 0, j = 0, cnt = 0;
  while(i < n && j < n){
    if(a[i] < b[j]){ cnt++; i++; j++;}
    else j++;
  }
  cout << (n - cnt) << endl;
}
 
int main(){
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
