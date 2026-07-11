#include <bits/stdc++.h>
#define fi ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main(){
  fi
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    vector<int> v(m);
    for(auto &e : v) cin >> e;
    sort(v.begin(),v.end());
    vector<int> gaps;
    for(int i = 0; i < m - 1; i++)
      gaps.push_back(v[i+1]-v[i]-1);
    gaps.push_back(v[0] + n - v[m-1] - 1);
    sort(gaps.rbegin(), gaps.rend());
    int numSaved = 0, numDays = 0;
    for(auto gap : gaps){
      int currGap = gap - numDays * 2;
      if(currGap > 0){
        numSaved++;
        currGap -= 2;
        if(currGap > 0) numSaved += currGap;
        numDays += 2;
      }
    }
    cout << n - numSaved << "\n";
  }
    
  return 0;
}
