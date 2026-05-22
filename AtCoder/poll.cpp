#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

int main()
{
  ll n; cin >> n;
  map<string,ll> freq;
  vector<ll> aux;
  
  REP(i,0,n){
    string s; cin >> s;
    freq[s]++;
  }
  
  ll max = 0;
  for(auto x : freq){
    if(x.second > max){
      max = x.second;
    }
  }
  
  for(auto x : freq){
    if(x.second == max){
      cout << x.first << "\n";
    }
  }
  
  return 0;
}
