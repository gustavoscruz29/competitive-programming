#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
int main() {
  fast_io
  int t, c, k; cin >> t >> c >> k;
  if(c < k * t) cout << c << endl;
  else cout << k * t << endl;
  
  return 0;
}
