#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    
    map<char,ll> freq;
    
    string s; cin >> s;
    ll sum = 0;
    
    REP(i,0,n){
      if(freq[s[i]] == 0){
        freq[s[i]]++;
        sum+=2;
      }
      else{
        sum+=1;
      }
    }
    
    cout << sum << "\n";
    
  
  }
  
  return 0;
}
