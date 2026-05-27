#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
  fast_io
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int x; cin >> x;
    vector<pair<int,int>> ais(n);
    REP(i,0,n){
      ll ai; cin >> ai;
      ais[i] = {-x + ai, x + ai};
    }
    
    int changes = 0;
    pair<int,int> inter = ais[0];
    REP(i,1,n){
      if(inter.second < ais[i].first || ais[i].second < inter.first){
        changes++;
        inter = ais[i];
      }
      else{
        if(inter.first < ais[i].first){
          inter.first = ais[i].first;
        }
        if(ais[i].second < inter.second){
          inter.second = ais[i].second;
        }
      }
    }
    cout << changes << "\n";
  }
  
  return 0;
}
