#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  fast_io
  
  ll n, m; cin >> n >> m;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  ll pA = 0, pB = 0, sum = 0, maior = -1;
  while(pB != n){
    if(sum + a[pB] > m){
      maior = max(sum, maior);
      sum-=a[pA];
      pA++;
    }
    else{
      sum+=a[pB];
      pB++;
    }
  }
  
  maior = max(sum, maior);
  
  cout << maior << "\n";
  
  return 0;
}
