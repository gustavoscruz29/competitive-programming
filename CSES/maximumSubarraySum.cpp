#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll n, x;
  cin >> n;
  
  ll menor = INT_MAX;
  ll maior = INT_MIN;
  
  vector<ll> v(n);
  vector<ll> p(n+1, 0);
  
  for(auto &e : v) { cin >> e; }
  
  for(int i = 1; i <= n; i++){
    p[i] = p[i-1] + v[i-1];
  }
  
  for(int i = 1; i <= n; i++){
    menor = min(menor,p[i-1]);
    maior = max(maior, p[i] - menor);
  }
  
  cout << maior <<"\n";
  
  return 0;
}
