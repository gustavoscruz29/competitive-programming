#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  long long t; cin >> t;
  map<string,int> req;
  
  while(t--){
    string s;
    cin >> s;
    req[s] += 1;
    if(req[s] > 1){
      s += to_string(req[s]-1);
      req[s];
      cout << s << "\n";
    }
    else{
      cout << "OK" << "\n";
    }
  
  }
  
  return 0;
}
