#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  freopen("hps.in","r",stdin);
  freopen("hps.out","w",stdout);
  fast_io
  ll n; cin >> n;
  vector<ll> pHoof(n+1, 0);
  vector<ll> pPaper(n+1, 0);
  vector<ll> pScissors(n+1, 0);
  const ll inf = LLONG_MIN;
  
  REP(i,1,n+1){
    char a; cin >> a;
    if(a == 'H'){
      pPaper[i] = pPaper[i-1] + 1;
      pHoof[i] = pHoof[i-1];
      pScissors[i] = pScissors[i-1];
    }
    else if (a == 'P'){
      pPaper[i] = pPaper[i-1];
      pHoof[i] = pHoof[i-1];
      pScissors[i] = pScissors[i-1] + 1;
    }
    else{
      pPaper[i] = pPaper[i-1];
      pHoof[i] = pHoof[i-1] + 1;
      pScissors[i] = pScissors[i-1];
    }
  }
  
  ll vAnterior = inf;
  ll vPosterior = inf;
  ll vMaior = inf;
  
  REP(i,1,n+1){
    vAnterior = max(vAnterior, pPaper[i]);
    vAnterior = max(vAnterior, pHoof[i]);
    vAnterior = max(vAnterior, pScissors[i]);
    vPosterior = max(vPosterior, pPaper[n] - pPaper[i]);
    vPosterior = max(vPosterior, pHoof[n] - pHoof[i]);
    vPosterior = max(vPosterior, pScissors[n] - pScissors[i]);
    vMaior = max(vMaior, vAnterior + vPosterior);
    vAnterior = inf;
    vPosterior = inf;
  }
  
  cout << vMaior << "\n";
  
  return 0;
}
