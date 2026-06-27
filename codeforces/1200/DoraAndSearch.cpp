#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> a(n);
  for(auto &e : a) cin >> e;
  int l = 0, r = n - 1;
  int mini = 1, maxi = n;
  while(l <= r){
    if(a[l] == mini){
      l++; mini++;
    }
    else if(a[l] == maxi){
      l++; maxi--;
    }
    else if(a[r] == mini){
      r--; mini++;
    }
    else if(a[r] == maxi){
      r--; maxi--;
    }
    else break;
  }
  if(l <= r)
    cout << l + 1 << " " << r + 1 << '\n';
  else
    cout << "-1\n";
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
}
