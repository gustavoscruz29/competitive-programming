#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    int n;
    long long x, y, maior, soma = 0;
    
    while(t--){
        cin >> n >> x >> y;
        long long a[n];
        
        for(int i = 0; i < n; i++){
          cin >> a[i];
          soma += a[i] / x;
        }
        
        for(int i = 0; i < n; i++){
          a[i] = (soma - (a[i] / x)) * y + a[i];
        }
        
        maior = a[0];
        
        for(int i = 1; i < n; i++){
          if(a[i] > maior){
            maior = a[i];
          }
        }
        
        cout << maior << "\n";
        
        soma = 0;
 
    }
 
    return 0;
}
