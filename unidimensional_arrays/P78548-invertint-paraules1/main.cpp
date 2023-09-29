#include <iostream>
#include <string>

using namespace std;


int main(){
    int numbers, aux;
    string vect_sequence;

    while(cin >> vect_sequence){
        
        for (int i = 1; i <= vect_sequence.size(); i++){
            cout << vect_sequence[vect_sequence.size()-i];
            // cout << " " << i << endl;
            if (i == vect_sequence.size()){
                cout << endl;
            } else {
                cout << "";
            }
        }
        vect_sequence.clear();
    }
}