#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n), suf(n);
    ll sumA = 0, sumSuf;
    for(auto &e : a){
      cin >> e;
      sumA += e;
    }
    
    suf[n-1] = a[n-1];
    sumSuf = suf[n-1];
    
    int l = 1, maior = 1;
    
    for(int i = n - 2; i >= 0; i--){
      suf[i] = min(suf[i+1], a[i]);
      sumSuf += suf[i];
      if(suf[i+1] > suf[i]){
        maior = max(maior, l);
        l = 1;
      }
      else l++;
    }
    
    maior = max(maior, l);
    
    cout << (sumA - sumSuf) + (maior - 1) << "\n";
  }
  
  return 0;
}
