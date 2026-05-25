#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    int pointB = 0;
    int sum = 0;
    REP(i,0,n){
      REP(j,pointB,m){
        if(b[j] == a[i]){
          pointB = j+1;
          sum++;
          break;
        }
        else{
          pointB = j+1;
        }
      }
      if(pointB == m) break;
    }
    
    cout << sum << "\n";
  
  }
  
}
