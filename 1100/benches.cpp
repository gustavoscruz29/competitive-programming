#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  
  int n,m; cin >> n >> m;
  int maior = -1;
  vector<int> ais(n);
  for(auto &e : ais){
    cin >> e;
    maior = max(maior, e);
  }
  maior = maior + m;
  REP(i,0,m){
    int pos = -1;
    REP(j,0,n){
      if(pos == -1 || ais[j] < ais[pos]){
        pos = j;
      }
    }
    ais[pos]++;
  }
  int maiorMin = *max_element(ais.begin(),ais.end());
  cout << maiorMin << " " << maior << "\n";
}
