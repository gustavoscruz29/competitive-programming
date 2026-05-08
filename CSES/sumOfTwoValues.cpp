#include <bits/stdc++.h>
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  ll n; cin >> n;
  ll x; cin >> x;
  vector<pair<ll,ll>> aux(n);
  
  REP(i,0,n){
    ll y; cin >> y;
    aux[i] = {y,i+1};
  }
  
  sort(aux.begin(), aux.end());
  
  ll left = 0;
  ll right = n-1LL;
  ll ok = 0;
  ll soma = 0;
  
  while(left != right){
    soma = aux[left].first + aux[right].first;
    if(soma == x){
      ok = 1;
      break;
    }
    else{
      if(soma > x){
        right--;
      }
      else{
        left++;
      }
    }
  }
  
  if(ok == 1){
    cout << aux[left].second << " " << aux[right].second;
  }
  else{
    cout << "IMPOSSIBLE";
  }
  
  cout << "\n";
  
  return 0;
}
