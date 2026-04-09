#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    REP(i,0,n){
      cin >> a[i];
    }
    vector<ll> b(n);
    REP(i,0,n){
      cin >> b[i];
    }
    
    vector<ll> intervalosA(2 * n + 1, 0);
    vector<ll> intervalosB(2 * n + 1, 0);
    
    ll counter = 1;
    
    REP(i,1,n){
      if(a[i] == a[i-1]){
        counter++;
      }
      else{
        intervalosA[a[i-1]] = max(intervalosA[a[i-1]], counter);
        counter = 1;
      }
    }
    
    intervalosA[a[n-1]] = max(intervalosA[a[n-1]], counter);
    counter = 1;
    
    REP(i,1,n){
      if(b[i] == b[i-1]){
        counter++;
      }
      else{
        intervalosB[b[i-1]] = max(intervalosB[b[i-1]], counter);
        counter = 1;
      }
    }
    intervalosB[b[n-1]] = max(intervalosB[b[n-1]], counter);
    
    ll maior = -1;
    REP(i,0,2*n+1){
      maior = max(maior, intervalosA[i] + intervalosB[i]);
    }
    
    cout << maior << "\n";
    
  }
  
  return 0;
  
}
