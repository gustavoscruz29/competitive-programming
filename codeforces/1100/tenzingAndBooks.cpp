#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  while(t--){
    int n, x; cin >> n >> x;
    int a[n];
    int s = 0;
    REP(i,0,3){
      REP(j,0,n) cin >> a[j];
      REP(j,0,n){
        if((x |a[j]) != x) break;
        s |= a[j];
      }
    }
    if(s == x) cout << "YES\n";
    else cout << "NO\n";
  }
  
  return 0;
}
