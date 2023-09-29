#include <iostream>
#include <vector>

using namespace std;


int main(){
    int numbers, aux;
    vector<int> vect_sequence;

    while(cin >> numbers){
        for (int i = 0; i< numbers; i++){
            cin >> aux;
            vect_sequence.push_back(aux);
        }
        if (numbers==0) cout << endl;
        for (int i = 1; i <= vect_sequence.size(); i++){
            cout << vect_sequence[vect_sequence.size()-i];
            // cout << " " << i << endl;
            if (i == vect_sequence.size()){
                cout << endl;
            } else {
                cout << " ";
            }
        }
        vect_sequence.clear();
    }
}