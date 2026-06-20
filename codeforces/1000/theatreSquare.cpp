#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
ll teto(ll a, ll b){
  return (a + b - 1LL) / b;
}
 
int main() {
  ll n, m, a; cin >> n >> m >> a;
  cout << teto(n,a) * teto(m,a) << endl;
  
  return 0;
}
