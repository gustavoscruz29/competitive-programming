#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  
  for(int n = 1; n <= t; n++){
    int g; cin >> g;
    int guests[g];
    int count = 0;
    int alone;
    
    REP(i,0,g){
      cin >> guests[i];
    }
    
    for(int i = 0; i < g; i++){
      if(guests[i] != -1){
        for(int j = i + 1; j < g; j++){
          if(guests[i] == guests[j]){
            guests[i] = -1;
            guests[j] = -1;
          }
        }
      }
    }
    
    REP(i,0,g){
      if(guests[i] != -1){
        cout << "Case #" << n << ": " << guests[i] << "\n";
      }
    }
    
  }
  
  return 0;
}
