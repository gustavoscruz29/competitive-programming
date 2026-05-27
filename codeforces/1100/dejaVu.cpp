#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  int t; cin >> t;
  while(t--){
    int n,q; cin >> n >> q;
    vector<ll> a(n);
    vector<int> x(q);
    for(auto &e:a){cin>>e;}
    for(auto &e:x){cin>>e;}
    int anterior = 31;
    REP(i,0,q){
      if(x[i] >= anterior) continue;
      ll val = 1 << x[i];
      REP(j,0,n){
        if(a[j] % val == 0){
          a[j]+=(val/2);
        }
      }
      anterior = x[i];
    }
    REP(i,0,n){
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
