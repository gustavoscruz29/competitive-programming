#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int c; cin >> c;
    map<int,int> m;
    REP(i,0,n){
      int x; cin >> x;
      m[x] += 1;
    }
    
    int soma = 0;
    for(auto x: m){
      if(x.second <= c){
        soma += x.second;
      }
      else{
        soma += c;
      }
    }
    
    cout << soma << "\n";
    
  }
  return 0;
}
