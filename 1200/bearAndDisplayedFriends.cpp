#include <bits/stdc++.h>
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  //lembrar de indices
  fast_io
  ll n, k, q;
  cin >> n >> k >> q;
  vector<ll> friends(n);
  
  REP(i,0,n){
    cin >> friends[i];
  }
  
  set<ll> whoIs;
  ll type = 0LL, id = 0LL;
  REP(i,0,q){
    cin >> type >> id;
    if(type == 1LL){
      if(whoIs.size() < k){
        whoIs.insert(friends[id-1]);
      }
      else{
        ll menor;
        for(auto x:whoIs){
          menor = x;
          break;
        }
        if(friends[id-1] > menor){
          whoIs.erase(menor);
          whoIs.insert(friends[id-1]);
        }
      }
    }
    else{
      if(whoIs.count(friends[id-1])){
        cout << "YES" << "\n";
      }
      else{
        cout << "NO" << "\n";
      }
    }
  }
  
  return 0;
}
