#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;

void solve(){
  int n, m; cin >> n >> m;
  int dig = 0;
  vector<int> z;
  REP(i,0,n){
    string s; cin >> s;
    int len = s.size();
    dig += len;
    for(int i = len - 1; i >= 0; i--){
      if(s[i] != '0'){
        if((len - i - 1) != 0)
          z.pb(len - i - 1);
        break;
      }    
    }
  }
  sort(z.begin(), z.end());
  int l = z.size();
  for(int i = l - 1; i >= 0; i -= 2)
    dig -= z[i];
  if(dig > m) cout << "Sasha" << endl;
  else cout << "Anna" << endl;
}

int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
