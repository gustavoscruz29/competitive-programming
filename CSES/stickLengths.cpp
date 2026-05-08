#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  long long n; cin >> n;
  vector<long long> ns(n);
  REP(i,0,n){
    cin >> ns[i];
  }
  
  sort(ns.begin(), ns.end());
  
  long long med = ns[n/2];
  long long custo = 0;
  
  REP(i,0,n){
    custo += abs(ns[i] - med);
  }
  
  cout << custo << "\n";
  
  return 0;
}
