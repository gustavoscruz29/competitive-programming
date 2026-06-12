#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
const int mod = 1e9 + 7;

ll modBinExp(int base, int expoente){
  if(expoente == 0) return 1;
  ll result = modBinExp(base, expoente / 2);
  if(expoente % 2 == 1)
    return (((result*result) % mod) * base) % mod;
  else
    return (result * result) % mod;
}

int main()
{
  int t; cin >> t;
  while(t--){
    int base, expoente;
    cin >> base >> expoente;
    cout << modBinExp(base, expoente) << endl;
  }
  
  return 0;
}
