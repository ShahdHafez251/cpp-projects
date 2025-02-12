#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cout << "enter a string ";
    cin >> s;
    //cout << "length " << s.length() ;
    for ( auto i =0 ;i < (s.length()) -1 ; i++){
        if (isupper(s[i])){
            
            s.insert(i++ ," ");
        }
    }
    cout << s << endl;
    return 0;
    
}
