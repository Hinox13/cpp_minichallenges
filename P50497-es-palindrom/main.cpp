#include <iostream>
#include <string>

using namespace std;

bool es_palindrom(const string& s){
    for (int i=0; i<(s.size()/2)+1; i++){
        if (s[i] != s[s.size()-1-i]) return false;
    }
    return true;
}

int main(){
    cout << es_palindrom("tallat") << endl;
    cout << es_palindrom("pocasolta") << endl;
}