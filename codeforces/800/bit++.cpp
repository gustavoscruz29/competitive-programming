#include <iostream>
using namespace std;
 
int main()
{
    int n, x = 0;
    string stmt;
    cin >> n;
    
    
    for(int i = 0; i < n; i++){
        cin >> stmt;
        if(stmt.front() == '+' || stmt.back() == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    
    cout << x;
 
    return 0;
}
