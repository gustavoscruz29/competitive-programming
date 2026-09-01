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
  vector<double> c(n+1,0), v(n+1,0);
  REP(i,1,n+1){
    double ci, vi; cin >> ci >> vi;
    c[i] += c[i-1] + ci;
    v[i] += v[i-1] + vi;
  }
  int q; cin >> q;
  while(q--){
    int i; cin >> i;
    double r = (c[i] - v[i]) / (c[i] + v[i]);
    if(r > 0) cout << "COMPRA\n";
    else if(r < 0) cout << "VENDA\n";
    else cout << "NEUTRO\n";
  }
  
  return 0;
}
