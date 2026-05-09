#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
  fast_io
  string s;
  cin >> s;
  set<char> ch;
  
  string fi = "";
  
  REP(i,1,s.size()){
    if(s[i] == s[i-1]){
      s = s;
    }
    else{
      fi += s[i-1];
    }
  }
  
  fi += s[s.size()-1];

  
  cout << fi << '\n';;
  
  return 0;
}
