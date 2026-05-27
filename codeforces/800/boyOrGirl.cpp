#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
    string nickname;
    
    cin >> nickname;
    
    set<char> letters;
    
    for(int i = 0; i < nickname.size(); i++){
        letters.insert(nickname[i]);
    }
    
    if(letters.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
 
    return 0;
}
