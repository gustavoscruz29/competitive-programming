#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

ll teto(ll a, ll b){
  return (a + b - 1) / b;
}
 
int main()
{
  fast_io
  
  ll t; cin >> t;
  while(t--){
    string s; cin >> s;
    ll cont = 0, one = 0, zero = 0, maxSeq = 0;
    REP(i,0,s.size()){
      if(s[i] == '0'){
        maxSeq = max(maxSeq, cont);
        cont = 0;
      }
      else{
        cont++;
        one++;
      }
    }
    maxSeq = max(maxSeq, cont);
    if(one == s.size()) cout << one * one << "\n";
    else if(zero == s.size()) cout << zero << "\n";
    else{
      ll maxSeq2 = 0, i = 0;
      while(s[i] == '1'){
        maxSeq2++;
        i++;
      }
      if(i != s.size()){
        i = s.size() - 1;
        while(s[i] == '1'){
          maxSeq2++;
          i--;
        }
      }
      maxSeq = max(maxSeq, maxSeq2);
      cout << (maxSeq + 1) / 2 * teto(maxSeq+1,2) << "\n";
    }
    
  }
  
  return 0;
}
