#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> s(n+1), aux(n+1,0);
  REP(i,1,n+1) cin >> s[i];
  aux[1] = 1;
  int maiorGlobal = 1;
  REP(i,2,n+1){
    int maior = 1;
    for(int j = 1; j * j <= i; j++){
      if(i % j == 0){
        if(s[i] > s[j])
          maior = max(maior, 1 + aux[j]);
        if(s[i] > s[i/j])
          maior = max(maior, 1 + aux[i/j]); 
      }
      aux[i] = maior;
    }
    maiorGlobal = max(maiorGlobal, aux[i]);
  }
  cout << maiorGlobal << endl;
}
 
int main(){
  f_io
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
