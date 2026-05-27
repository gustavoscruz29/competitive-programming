#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  ll n, k; cin >> n >> k;
  ll x;
  vector<ll> pref(n+1,0);
  REP(i,1,n+1){
    cin >> x;
    pref[i] = pref[i-1] + x;
  }
  
  ll sum = 0, times = 0;
  REP(i,k,n+1){
    sum += pref[i] - pref[i - k];
    times++;
  }
  
  double division = (double)sum / (double)times;
  
  cout << setprecision(30) << division << "\n";
  
  return 0;
}
