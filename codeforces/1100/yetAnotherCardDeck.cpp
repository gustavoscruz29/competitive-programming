#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
int main() {
  int n,q;
  cin >> n >> q;
  vector<int>first_pos(51,n+1);
  for(int i=1;i<=n;i++){//n
      int color;cin>>color;
      if(first_pos[color]==n+1){
          first_pos[color]=i;
      }
  }
  while(q--){//q*50
      int color;cin>>color;
      int ans=first_pos[color];
      for(int i=1;i<=50;i++){
          if(first_pos[i]<ans){
              first_pos[i]++;
          }
      }
      first_pos[color]=1;
      cout<<ans<<" ";
    }
    cout<<"\n";
    
}
