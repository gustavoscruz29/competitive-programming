#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    string a; cin >> a;
    string b; cin >> b;
    int maior = 0;
    vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1,0)); 
    
    for(int i = 1; i <= b.size(); i++){
      for(int j = 1; j <= a.size(); j++){
        if(b[i-1] == a[j-1]){
          dp[j][i] = dp[j-1][i-1] + 1;
          maior = max(maior, dp[j][i]);
        }
        else{
          dp[j][i] = 0;
        }
      }
    }
    
    cout << (a.size() + b.size()) - (2 * maior) << "\n";
    
  }
      
  return 0;
}
