#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int k; cin >> k;
    int ai[n];
    vector<pair<int,int>> monster;
    
    REP(i,0,n){
      cin >> ai[i];
    }
    
    REP(i,0,n){
      if(ai[i] % k == 0){
        ai[i] = k;
      }
      else{
        ai[i] = ai[i] % k;
      }
      monster.push_back({ai[i],-i});
    }
    
    sort(monster.rbegin(), monster.rend());
    REP(i,0,n)
        cout << (-monster[i].second) + 1 << " ";
    
    cout << "\n";
    
  }
  
  return 0;
}
