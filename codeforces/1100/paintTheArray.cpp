#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
const int mod = 1e9 + 7;
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n);
  cin >> a[0] >> a[1];
  ll gcdA = a[0], gcdB = a[1];
  REP(i,2,n){
    cin >> a[i];
    if(i % 2 == 0) gcdA = gcd(gcdA, a[i]);
    else gcdB = gcd(gcdB,a[i]);
  }
  ll result = -1;
  for(int i = 0; i < n; i+=2){
    if(a[i] % gcdB == 0){
      result = 1;
      break;
    }
  }
  if(result == -1){
    cout << gcdB << "\n";
    return;
  }
  
  for(int i = 1; i < n; i+=2){
    if(a[i] % gcdA == 0){
      result = -1;
      break;
    }
  }
  if(result == 1){
    cout << gcdA << "\n";
    return;
  }
  else{
    cout << "0\n";
    return;
  }
}
 
int main()
{
  int t; cin >> t;
  while(t--){
    solve();
  }
  
  return 0;
}
