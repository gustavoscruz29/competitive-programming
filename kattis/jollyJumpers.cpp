#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int n;
  while(cin >> n){
    int v[n];
    int dif[n-1];
    int c = 0, s = 0;
    string isJ;
    
    REP(i,0,n){
      cin >> v[i];
    }
    
    REP(i,1,n){
      dif[i-1] = abs(v[i] - v[i-1]);
      if(dif[i-1] >= n || dif[i-1] == 0){
        isJ = "Not jolly";
        s = 1;
      }
    }
    
    REP(i,0,n-1){
      REP(j,i+1,n-1){
        if(dif[i] == dif[j]){
          c++;
        }
      }
    }
    
    if(c >= 1 || s == 1){
      isJ = "Not jolly";
    }
    else{
      isJ = "Jolly";
    }
    
    cout << isJ << "\n";
    
  }
    
  return 0;
}
