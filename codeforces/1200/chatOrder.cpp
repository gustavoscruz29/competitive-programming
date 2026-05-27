#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll n; cin >> n;
  vector<string> aux(n);
  map<string,ll> freq;
  REP(i,0,n){
    string s; cin >> s;
    aux[i] = s;
    freq[s]++;
  }
  
  for(int i = n - 1; i >= 0; i--){
    if(freq[aux[i]] != 0){
      cout << aux[i] << "\n";
    }
    freq[aux[i]] = 0;
  }
  
  return 0;
}
