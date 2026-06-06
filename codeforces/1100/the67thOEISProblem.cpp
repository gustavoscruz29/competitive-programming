#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    int n; cin >> n;
    REP(i,0,n){
      cout << (2*i + 1) * (2 * i + 3) << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
