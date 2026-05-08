#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  long long n; cin >> n;
  vector<pair<long long, long long>> ns(n);
  REP(i,0,n){
    cin >> ns[i].second >> ns[i].first;
  }
  
  sort(ns.begin(), ns.end());
  
  long long count = 1;
  long long fin = ns[0].first;
  REP(i,1,n){
    if(ns[i].first >= fin && ns[i].second >= fin){
      count++;
      fin = ns[i].first;
    }
  }
  cout << count << "\n";
  
  return 0;
}
