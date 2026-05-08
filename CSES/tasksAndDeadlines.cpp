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
    cin >> ns[i].first >> ns[i].second;
  }
  
  sort(ns.begin(), ns.end());
  
  long long time = 0;
  long long points = 0;
  REP(i,0,n){
    time += ns[i].first;
    points += ns[i].second - time;
  }
  cout << points << "\n";
  
  return 0;
}
