#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
int teto(int a, int b){
  return (a + b - 1) / b;
}
 
int main() {
  int n; cin >> n;
  vector<int> c(5,0);
  REP(i,0,n){
    int x; cin >> x;
    c[x]++;
  }
  int ans = c[4] + c[3];
  if(c[1] > c[3])
    c[1] = c[1] - c[3];
  else
    c[1] = 0;
  ans += teto(c[1] + c[2] * 2, 4);
  cout << ans << "\n";
  
  return 0;
}Taxi
