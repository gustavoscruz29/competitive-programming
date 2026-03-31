

    #include <bits/stdc++.h>
    #define REP(i,a,b) for(int i = a; i < b; i++)
    #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
     
    using namespace std;
     
    int main()
    {
      fast_io
      int t; cin >> t;
      
      while(t--){
        long long n, p; cin >> n >> p;
        long long custo = 0;
        long long numberRes;
        pair<long long,long long> pa[n];
        REP(i,0,n)
          cin >> pa[i].second;
        REP(i,0,n)
          cin >> pa[i].first;
        sort(pa, pa + n);
        custo = p;
        numberRes = n - 1;
        REP(i,0,n){
          if(pa[i].first < p && numberRes != 0){
            if(numberRes >= pa[i].second){
              custo += (pa[i].first * pa[i].second);
              numberRes -= pa[i].second;
            }
            else{
              custo += (numberRes * pa[i].first);
              numberRes = 0;
            }
          }
          else{
            break;
          }
        }
        if(numberRes != 0){
          custo += (p * numberRes);
        }
        cout << custo << "\n";
      }
          
      return 0;
    }
