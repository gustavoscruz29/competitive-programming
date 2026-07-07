#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
vector<ll> divisors(ll n){
  vector<ll> resp;
  for(int i = 2; i * 1ll * i <= n; i++){
    if(n % i == 0){
      resp.push_back(i);
      if(i != n / i) resp.push_back(n/i);
    }
  }
  return resp;
}
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n);
  REP(i,0,n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<ll> aux = divisors(a[0] * a[n-1]);
  sort(aux.begin(), aux.end());
  if(a == aux) cout << a[0] * a[n-1] << "\n";
  else cout << "-1\n";
  
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
