#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    set<char> freq;
    ll sum = 0;
    REP(i,0,n){
      sum += freq.size();
      freq.insert(s[i]);
    }
    sum += freq.size();
    cout << sum << "\n";
  }
  
  return 0;
}
