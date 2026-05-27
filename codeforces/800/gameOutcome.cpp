#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
    fast_io
    int n; cin >> n;
    int matriz[n][n];
    int linhas[n];
    int colunas[n];
    int vencedores = 0;
    
    REP(i,0,n){
      REP(j,0,n){
        cin >> matriz[i][j];
      }
    }
    
    REP(i,0,n){
      int somaColuna = 0;
      int somaLinha = 0;
      REP(j,0,n){
        somaLinha += matriz[i][j];
        somaColuna += matriz[j][i];
      }
      linhas[i] = somaLinha;
      colunas[i] = somaColuna;
    }
    
    REP(i,0,n){
      REP(j,0,n){
        if(colunas[j] > linhas[i]){
          vencedores++;
        }
      }
    }
    
    cout << vencedores << '\n';
    
    return 0;
}
