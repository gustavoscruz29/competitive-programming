#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int n; vector<int> a;
 
int solve(int l, int r){
  set<int> s;
  REP(i,0,n+1) s.insert(i);
  while(l >= 0 && r < 2*n && a[l] == a[r]){
    s.erase(a[l]); 
    l--, r++;
  }
  return *s.begin();
}
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    cin >> n;
    a = vector<int>(2*n);
    int l = -1, r = 0;
    
    REP(i,0,2*n){
      cin >> a[i];
      if(a[i] == 0){
        if(l == -1) l = i;
        else r = i;
      }
    }
    
    cout << max({solve(l,l), solve(r,r), solve((l+r)/2,(l+r+1)/2)}) << "\n";
    
  }
  
  return 0;
}
