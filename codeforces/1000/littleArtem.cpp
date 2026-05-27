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
   int m; cin >> m;
   
   
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(i == 0 && j == 0){
        cout << 'W';
      }
      else{
        cout << 'B';
      }
    }
    cout << "\n";
   }
   
  }
  
  
  return 0;
}
