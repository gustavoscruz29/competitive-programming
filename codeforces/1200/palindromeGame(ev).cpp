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
 
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  int z = 0, o = 0;
  REP(i,0,n){
    if(s[i] == '0') z++;
    else o++;
  }
  bool isPalindrome = true;
  bool isReverse = false;
  vector<ll> sum(2,0);
  bool round = true;
  if(o == n){
    cout << "DRAW\n";
    return;
  }
  while(o != n){
    if(isPalindrome){
      if(round) sum[0]++;
      else sum[1]++;
      if(z % 2 == 1)
        isPalindrome = true;
      else
        isPalindrome = false;
      z--, o++;
      isReverse = false;
    }
    else if(isReverse){
      if(round) sum[0]++;
      else sum[1]++;
      isPalindrome = true;
      isReverse = false;
      z--, o++;
    }
    else{
      if(o != (n-1)){
        if(round) sum[0]++;
        else sum[1]++;
        isPalindrome = true;
        isReverse = false;
        z--, o++;
      }
      else{
        isReverse = true;
        isPalindrome = false;
      }
    }
    round = !round;
  }
  if(sum[0] > sum[1]) cout << "BOB\n";
  else if(sum[0] < sum[1]) cout << "ALICE\n";
  else cout << "DRAW\n";
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
