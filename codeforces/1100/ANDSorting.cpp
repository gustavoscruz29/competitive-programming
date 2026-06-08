#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long ll;
 
using namespace std;
 
int main(){
  
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int ans = (1 << 30) - 1;
    int x;
    REP(i,0,n){
      cin >> x;
      if(x != i) ans &= x;
    }
    cout << ans << '\n';
  }
  return 0;
}
