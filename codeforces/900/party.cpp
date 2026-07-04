#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;

int main(){
  int n; cin >> n;
  vector<int> empl(n+1);
  REP(i,1,n+1) cin >> empl[i];
  int maxDeep = -1;
  REP(i,1,n+1){
    int atual = empl[i];
    int deep = 1;
    while(atual != -1){
      atual = empl[atual];
      deep++;
    }
    maxDeep = max(maxDeep, deep); 
  }
  cout << maxDeep << endl;
}
