#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  
  int n; cin >> n;
  string s; cin >> s;
  int yes = 0;
  int i1 = 0, i2 = 0;
  REP(i,1,n){
    if(s[i] < s[i-1]){
      yes = 1;
      i1 = i;
      i2 = i+1;
      break;
    }
  }
  
  if(yes == 1){
    cout << "YES" <<"\n";
    cout << i1 << " " << i2;
  }
  else{
    cout << "NO";
  }
  
  cout << "\n";
  
}
