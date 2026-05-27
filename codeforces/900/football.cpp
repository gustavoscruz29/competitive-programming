#include <iostream>
 
using namespace std;
 
int main()
{
    
    int cont = 1;
    string players;
    
    cin >> players;
    
    char anterior = players[0];
    
    for (int i = 1; i < players.size(); i++){
        if(players[i] == anterior){
            cont++;
        }
        else{
            cont = 1;
        }
        anterior = players[i];
        if(cont == 7){
            break;
        }
    }
    
    if(cont == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}
