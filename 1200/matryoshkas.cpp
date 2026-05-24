#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> ais(n);
    map<int,int> cont;
    set<int> val;
    for(auto &e : ais){
      cin>>e;
      cont[e]++;
      val.insert(e);
      val.insert(e+1);
    }
    
    int ant = 0, c = 0;
    int conjuntosCriados = 0;
    for(auto x : val){
      c = cont[x];
      conjuntosCriados += max(0,c-ant);
      ant = c;
    }
    
    cout << conjuntosCriados << "\n";
  
  }
}
