#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{

  ll n; cin >> n;
  multiset<ll> ks;
  ll towers = 0;
  while(n--){
    ll k; cin >> k;
    auto upper = ks.upper_bound(k);
    if(upper == ks.end()){
      towers++;
      ks.insert(k);
    }
    else{
      ks.erase(ks.find(*upper));
      ks.insert(k);
    }
  }
  
  cout << towers << "\n";
  
  return 0;
}
