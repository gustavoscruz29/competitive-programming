#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long ll;

using namespace std;

int main(){
  
  int t; cin >> t;
  while(t--){
    ll n, c; cin >> n >> c;
    vector<ll> a(n), p(n+1,0);
    ll x;
    REP(i,0,n){
      cin >> x;
      a[i] = x + i + 1;
    }
    ll index = -1;
    sort(a.begin(), a.end());
    REP(i,1,n+1){
      p[i] = p[i-1] + a[i-1];
      if(p[i] > c){
        index = i - 1;
        break;
      }
    }
    if(index == -1) cout << n << "\n";
    else cout << index << "\n";
    
  }
  return 0;
}
