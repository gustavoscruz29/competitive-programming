#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int x, y;
 
void solve(){
  int n; char c; string s;
  cin >> n >> c >> s;
 
  int dif = 0;
  for(int i = 0; i < n; i++)
      if(s[i] != c) dif++;
 
  if(dif == 0){
      cout << "0\n";
      return;
  }
 
  for(int i = n; i > n/2; i--){ // i de n até n/2+1
    if(s[i-1] == c){
      cout << "1\n" << i << "\n";
      return;
    }
  }
 
  cout << "2\n" << n << " " << (n-1) << "\n";
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
