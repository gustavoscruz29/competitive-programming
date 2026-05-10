#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  freopen("bcount.in","r",stdin);
  freopen("bcount.out","w",stdout);
  ll n; cin >> n;
  ll q; cin >> q;
  
  vector<ll> v(n);
  vector<ll> p1(n+1, 0);
  vector<ll> p2(n+1, 0);
  vector<ll> p3(n+1, 0);
  
  for(auto &e : v) { cin >> e; }
  
  for(int i = 1; i <= n; i++){
    if(v[i-1] == 1){
      p1[i] = p1[i-1] + 1;
      p2[i] = p2[i-1];
      p3[i] = p3[i-1];
    }
    else if(v[i-1] == 2){
      p1[i] = p1[i-1];
      p2[i] = p2[i-1] + 1;
      p3[i] = p3[i-1];
    }
    else{
      p1[i] = p1[i-1];
      p2[i] = p2[i-1];
      p3[i] = p3[i-1] + 1;
    }
  }
  
  ll a, b;
  while(q--){
    cin >> a >> b;
    cout << p1[b] - p1[a-1] << " ";
    cout << p2[b] - p2[a-1] << " ";
    cout << p3[b] - p3[a-1] << "\n";
  }
  
  return 0;
}
