#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int n; cin >> n;
  vector<int> a(n);
  for(auto &e: a) cin >> e;
  sort(a.begin(), a.end());
  
  int q; cin >> q;
  int mi;
  while(q--){
    cin >> mi;
    auto it = upper_bound(a.begin(), a.end(), mi);
    if(it == a.end()) cout << n << "\n";
    else{
      int indice = it - a.begin();
      cout << indice << "\n";
    }
  }
  
  return 0;
}
