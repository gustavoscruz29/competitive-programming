#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define f first
#define s second
typedef long long ll;
 
using namespace std;
 
int divisors(int n, int k){
  int large = 0;
  for(int i = 1; i * i <= n; i++){
    if(i > k) break;
    if(n % i == 0){
      if(i <= k) large = max(large,i);
      if(n / i <= k) large = max(large, n/i);
    }
  }
  return large;
}
 
void solve(){
  int n, k; cin >> n >> k;
  cout << n / divisors(n,k) << '\n';
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
