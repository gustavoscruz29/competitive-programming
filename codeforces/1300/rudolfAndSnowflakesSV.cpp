#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const int MAXN = 1e6;
vector<char> isPossible(MAXN + 1, 0);
 
void solve(){
  for(ll k = 2; k * k <= MAXN; k++){
    ll power = k * k * k;
    ll sum = (power - 1) / (k - 1);
    while(sum <= MAXN){
      isPossible[sum] = 1;
      power *= k;
      sum = (power - 1) / (k - 1);
    }
  }
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--){
    solve();
    int n; cin >> n;
    cout << (isPossible[n] ? "YES" : "NO") << "\n";
  }
  
  return 0;
}
