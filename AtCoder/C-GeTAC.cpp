#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  fast_io
  
  int n, q; cin >> n >> q;
  vector<ll> p(n+1,0);
  string s; cin >> s;
  REP(i,1,n+1){
    if(s[i-1] == 'A'){
      if(s[i] == 'C'){
        p[i] = p[i-1];
        p[i+1] = p[i] + 1;
        i++;
      }
      else{
        p[i] = p[i-1];
      }
    }
    else{
      p[i] = p[i-1];
    }
  }
  
  ll l, r;
  while(q--){
    cin >> l >> r;
    cout << p[r] - p[l] << "\n";
  }
  
  return 0;
}
