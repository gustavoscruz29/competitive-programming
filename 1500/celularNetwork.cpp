    #include <bits/stdc++.h>
    #define REP(i,a,b) for(long long i = a; i < b; i++)
    #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
    typedef long long ll;
     
    using namespace std;
     
    bool ver(int r, vector<int>&a, vector<int>&b, int n){
      int pN = 0, pM = 0, cidades = 0;
      while(pN != a.size() && pM != b.size()){
        if(((b[pM] <= a[pN]) && (b[pM] + r) >= a[pN]) || ((b[pM] >= a[pN]) && (b[pM] - r) <= a[pN])){
          cidades++;
          pN++;
        }
        else{
          pM++;
        }
      }
      return cidades == n;
    }
     
    int main()
    {
      fast_io
      int n,m; cin >> n >> m;
      vector<int> a(n);
      vector<int> b(m);
      for(auto &e : a) cin >> e;
      for(auto &e : b) cin >> e;
      int l = 0, r = 2e9, ans = -1, raio = -1;
      
      while(l <= r){
        raio = l + (r - l) / 2;
        if(ver(raio,a,b,n)){
          ans = raio;
          r = raio - 1;
        }
        else{
          l = raio + 1;
        }
      }
      
      cout << ans << "\n";
      
      return 0;
    }

