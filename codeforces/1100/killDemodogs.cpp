#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  const int n1 = 1e9 + 7;
  
  int t; cin >> t;
  
  while(t--){
    ll n; cin >> n;
    ll ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout << ans << "\n";
  }
  
  return 0;
}
