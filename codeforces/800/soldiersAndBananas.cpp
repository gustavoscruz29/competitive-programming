#include <iostream>
using namespace std;
 
int main()
{
  int k, w, n, res;
  
  cin >> k;
  cin >> n;
  cin >> w;
  
  res = (((w+1)*w)/2) * k;
  
  if(n < res){
    res = res - n;
  }
  else{
    res = 0;
  }
  
  cout << res;
 
  return 0;
}
