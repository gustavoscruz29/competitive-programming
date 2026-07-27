
#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
map<int,int> divs;
 
void divisors(int x, map<int,int>&divs){
  for(int i = 2; i * i <= x; i++){
    while(x % i == 0){
      divs[i]++;
      x /= i;
    }
  }
  if(x > 1) divs[x]++;
}
 
void solve(){
  int n; cin >> n;
  vector<int> a(n);
  map<int,int> divs;
  REP(i,0,n){
    cin >> a[i];
    divisors(a[i],divs);
  }
  for(auto e : divs){
    if(e.second % n != 0){
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
