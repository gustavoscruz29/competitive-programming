#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int main(){
  ll a, b; cin >> a >> b;
  vector<ll> div;
  for(ll i = 1; i * i <= a; i++){
    if(a % i == 0){
      div.push_back(i);
      if(i != a / i) div.push_back(a / i);
    }
  }
  sort(div.begin(), div.end());
  if(b > div.size()) cout << "-1\n";
  else cout << div[b-1] << "\n";
  
  return 0;
}
