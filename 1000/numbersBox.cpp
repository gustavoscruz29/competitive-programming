#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    int contNegatives = 0;
    int soma = 0;
    int menor = INT_MAX;
    REP(i,0,n){
      REP(j,0,m){
        int aux; cin >> aux;
        soma += abs(aux);
        grid[i][j] = aux;
        if(aux < 0){
          contNegatives++;
        }
        menor = min(menor, abs(aux));
      }
    }
    
    if((contNegatives % 2) == 0){
      cout << soma << "\n";
    }
    else{
      cout << soma - (2 * menor) << "\n";
    }
    
  }
  
  return 0;
}
