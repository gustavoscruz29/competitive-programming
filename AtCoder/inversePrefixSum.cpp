#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  fast_io
  
  int n; cin >> n;
  vector<ll> s(n);
  ll x; cin >> x; 
  s[0] = x;
  ll anterior = x;
  
  REP(i,1,n){
    cin >> x;
    s[i] = x - anterior;
    anterior = x;
  }
  
  REP(i,0,n){
    cout << s[i] << " ";
  }
  cout <<"\n";
  
  return 0;
}
