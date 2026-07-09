#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;

vector<int> con(51);

int main(){
  int n, m; cin >> n >> m;
  REP(i,0,m){
    int a, b; cin >> a >> b;
    con[a]++; con[b]++;
  }
  
  REP(i,1,n+1){
    cout << con[i] << "\n";
  }
  
  return 0;
}
