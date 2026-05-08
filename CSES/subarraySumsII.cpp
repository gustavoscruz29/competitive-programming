#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll n, x;
  cin >> n >> x;
  
  map<ll,ll> freq;
  vector<ll> v(n);
  vector<ll> p(n+1, 0);
  
  for(auto &e : v) { cin >> e; }
  
  freq[p[0]]++;
  for(int i = 1; i <= n; i++){
    p[i] = p[i-1] + v[i-1];
  }
  
  ll cont = 0;
  for(int i = 1; i <= n; i++){
    ll result = p[i] - x;
    if(freq[result] > 0){
      cont+=freq[result];
    }
    freq[p[i]]++;
  }
  
  cout << cont <<"\n";
  
  return 0;
}
