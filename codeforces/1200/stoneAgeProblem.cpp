#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int main(){
  fast_io
  ll n, q; cin >> n >> q;
  vector<ll> a(n);
  set<ll> s;
  ll sum = 0;
  for(auto &e : a){
    cin >> e;
    sum += e;
  }
  
  ll g;
  ll newElem = -1;
  for(g = 0; g < q; g++) {
    int t; cin >> t;
    if(t == 1){
      int i; cin >> i; 
      ll x; cin >> x;
      if(x > a[i-1])
        sum += (x - a[i-1]);
      else
        sum -= (a[i-1] - x);
      a[i-1] = x;
      cout << sum << "\n";
    }
    else{
      ll x; cin >> x;
      sum = n * x;
      newElem = x;
      cout << sum << "\n";
      g++;
      break;
    }
  }
  
  for(g; g < q; g++) {
    int t; cin >> t;
    if(t == 1){
      int i; cin >> i; 
      ll x; cin >> x;
      if(s.count(i-1)){
        if(x > a[i-1]) sum += (x - a[i-1]);
        else sum -= (a[i-1] - x);
        a[i-1] = x;
      }
      else{
        if(x > newElem) sum += (x - newElem);
        else sum -= (newElem - x);
        a[i-1] = x;
        s.insert(i-1);
      }
      cout << sum << "\n";
    }
    else{
      ll x; cin >> x;
      sum = n * x;
      newElem = x;
      s.clear();
      cout << sum << "\n";
    }
  }
  
  return 0;
}
