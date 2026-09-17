#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
int main(){
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;
  sort(a.begin(), a.end());
  REP(i,0,m){
    auto it = upper_bound(a.begin(),a.end(),b[i]);
    if(it == a.end()) cout << n << " ";
    else cout << it - a.begin() << " ";
  }
  cout << endl;
  return 0;
}
