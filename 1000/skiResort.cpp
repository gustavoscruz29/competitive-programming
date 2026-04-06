#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{

  fast_io
  int t; cin >> t;
  
  while(t--){
    int n; cin >> n;
    long long k; cin >> k;
    long long q; cin >> q;
    long long a[n];
    
    REP(i,0,n){
      cin >> a[i];
    }
    
    vector<int> seq;
    long long goodDays = 0;
    
    REP(i,0,n){
      if(a[i] <= q){
        goodDays++;
      }
      else{
        if(goodDays >= k){
          seq.push_back(goodDays);
        }
        goodDays = 0;
      }
    }
    
    if(goodDays >= k){
      seq.push_back(goodDays);
    }
    
    if(seq.size() == 0){
      cout << 0 << "\n";
    }
    else{
      long long soma = 0;
      REP(i,0,seq.size()){
        long long j = seq[i] - k + 1;
        soma += j * (j + 1) / 2;
      }
      cout << soma << "\n";
    }
    
  }
  
  return 0;
}
