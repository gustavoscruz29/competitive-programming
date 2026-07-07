#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
 
int main(){
  ll a, b; cin >> a >> b;
 
  ll e2a=0, e3a=0, e5a=0;
  ll e2b=0, e3b=0, e5b=0;
 
  while(a % 2 == 0){ a/=2; e2a++; }
  while(a % 3 == 0){ a/=3; e3a++; }
  while(a % 5 == 0){ a/=5; e5a++; }
 
  while(b % 2 == 0){ b/=2; e2b++; }
  while(b % 3 == 0){ b/=3; e3b++; }
  while(b % 5 == 0){ b/=5; e5b++; }
 
  if(a != b) cout << -1 << "\n";
  else {
    ll ops = llabs(e2a-e2b) + llabs(e3a-e3b) + llabs(e5a-e5b);
    cout << ops << "\n";
  }
}
