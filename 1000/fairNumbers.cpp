

    #include <bits/stdc++.h>
    #define REP(i,a,b) for(long long i = a; i < b; i++)
    #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
    typedef long long ll;
     
    using namespace std;
     
    bool isFair(ll num){
      ll d = num;
      while(d != 0LL){
        ll x = d % 10;
        if(x != 0 && num % x != 0){
          return false;
        }
        d /= 10LL;
      }
      return true;
    }
     
    int main()
    {
      fast_io
      ll t; cin >> t;
      
      while(t--){
        ll n; cin >> n;
        while(!isFair(n))
          n++;
        cout << n << "\n";
      }
          
      return 0;
    }
