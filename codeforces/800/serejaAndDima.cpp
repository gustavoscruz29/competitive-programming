#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"
typedef long long ll;
 
using namespace std;
 
int main(){
  
  ll n; cin >> n;
  vector<ll> a(n);
  for(auto &e:a) cin >> e;
  ll p1 = 0, p2 = n - 1;
  ll s1 = 0, s2 = 0;
  ll j = 0;
  while(p1 <= p2){
    if(j % 2 == 0){
      if(a[p1] >= a[p2]){
        s1 += a[p1];
        p1++;
      }
      else{
        s1 += a[p2];
        p2--;
      }
    }
    else{
      if(a[p1] >= a[p2]){
        s2 += a[p1];
        p1++;
      }
      else{
        s2 += a[p2];
        p2--;
      }
    }
    j++;
    
  }
  
  cout << s1 << " " << s2 << "\n";
  
  return 0;
}
