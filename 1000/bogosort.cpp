#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
ll teto(ll a, ll quo){
  return (a + quo - 1) / quo;
}
 
int main()
{
  
  int t; cin >> t;
  
  while(t--){
  
    int n; cin >> n;
    vector<int> ais(n);
    for(auto &e : ais){cin>>e;};
    sort(ais.rbegin(),ais.rend());
    REP(i,0,n){
      cout << ais[i] << " ";
    }
    cout << "\n";
  }
  
}
