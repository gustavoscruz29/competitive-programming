#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
  fast_io;
  
  int t; cin >> t;
  while(t--){
    int s1 = 0, s0 = 0;
    int n; cin >> n;
    vector<int> p0;
    vector<int> p1;
    string s; cin >> s;
    
    REP(i,0,n){
      if(s[i] == '0'){
        s0 += 1;
        p0.push_back(i);
      }
      else{
        s1 += 1;
        p1.push_back(i);
      }
    }
    
    if(s0 == n){
      cout << 0 << "\n";
      continue;
    }
    
    if(s0 % 2 == 1){
      cout << s0 << "\n";
      REP(i,0,p0.size()){
        cout << p0[i] + 1 << " ";
      }
    }
    else{
      if(s1 % 2 == 0){
        cout << s1 << "\n";
        REP(i,0,p1.size()){
          cout << p1[i] + 1 << " ";
        }
      }
      else{
        cout << -1;
      }
    }
    
    cout << "\n";
  }

  return 0;
}
