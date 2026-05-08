#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  set<int> m;
  int n; cin >> n;
  REP(i,0,n){
    int x; cin >> x;
    m.insert(x);
  }
  cout << m.size() << "\n";
  
  return 0;
}
