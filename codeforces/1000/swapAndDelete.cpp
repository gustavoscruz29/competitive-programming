#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  
  while(t--){
    int c1 = 0, c0 = 0;
    string s; cin >> s;
    int tSize = 0;
    
    REP(i,0,s.size()){
      if(s[i] == '1'){
        c1++;
      }
      else{
        c0++;
      }
    }
    
    if(c1 != c0){
      REP(i,0,s.size()){
        if(s[i] == '1'){
          if(c0 > 0){
            c0--;
            tSize += 1;
          }
          else{
            break;
          }
        }
        else{
          if(c1 > 0){
            c1--;
            tSize += 1;
          }
          else{
            break;
          }
        }
      }
    }
    else{
      tSize = s.size();
    }
    
    cout << (s.size() - tSize) << '\n';
    
  }    
  return 0;
}
