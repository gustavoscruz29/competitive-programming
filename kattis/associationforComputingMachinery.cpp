#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define endl "\n"
typedef long long ll;

using namespace std;

int main(){
  
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  ll sum = 0;
  ll cont = 0, sumTotal = 0;;
  if(a[k] > 300){
    cout << "0 0\n";
  }
  else{
    sum += a[k];
    sumTotal = a[k];
    cont = 1;
    a[k] = -1;
    sort(a.begin(),a.end());
    REP(i,0,n){
      if(a[i] == -1){
        continue;
      }
      else{
        if(sum + a[i] <= 300){
          cont++;
          sum += a[i];
          sumTotal = sumTotal + sum;
        }
      }
    }
    cout << cont << " " << sumTotal << "\n";
  }

  return 0;
}
