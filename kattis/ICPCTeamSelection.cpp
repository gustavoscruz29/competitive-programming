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
    vector<ll> students(3*n);
    REP(i,0,3*n){
      cin >> students[i];
    }
    
    sort(students.begin(), students.end());
    
    ll sum = 0;
    int aux = 2;
    REP(i,0,n){
      sum += students[(3*n)-aux];
      aux += 2;
    }
    
    cout << sum << "\n";
  }
  
  
  return 0;
