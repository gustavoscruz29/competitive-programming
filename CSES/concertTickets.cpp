#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  ll n, m;
  cin >> n >> m;
  multiset<ll> price;
  vector<ll> maxPrice(m);
  
  REP(i,0,n){
    ll x; cin >> x;
    price.insert(x);
  }
  
  REP(i,0,m){
    ll x; cin >> x;
    auto it = price.upper_bound(x);
    if(it == price.begin()){
      cout << "-1\n";
    }
    else{
      it--;
      cout << *it << "\n";
      price.erase(it);
    }
  }
  
  
  
  return 0;
}
