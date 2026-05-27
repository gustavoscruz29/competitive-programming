#include <iostream>
 
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  
  int t; cin >> t;
  
  while(t--){
    int x, y; cin >> x >> y;
    if(y > 0){
      x = x - (y * 2);
    }
    else if(y < 0){
      x = x + (y * 4);
    }
    else{
      x = x + y;
    }
    
    if(x % 3 == 0 && x >= 0){
      cout << "YES\n";
    }
    else{
      cout << "NO\n"; 
    }
    
  }
  
  return 0;
}
