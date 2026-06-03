#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long ll;
 
using namespace std;
 
int main(){
  
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    ll negatives = 0, sum = 0;
    REP(i,0,n){
      cin >> a[i];
      if(a[i] <= 0){
        a[i] = -a[i];
        negatives++;
      }
      sum += a[i];
    }
    if(negatives % 2 == 0){
      cout << sum << "\n";
      continue;
    }
    sort(a.begin(), a.end());
    sum -= (2 * a[0]);
    cout << sum << "\n";
  }
  return 0;
}
