#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    int numbers;

    vector<string> vect_sequence;

    string word, aux;

    cin >> numbers;

    for (int j =0; j<numbers; j++){
        cin >> word;
        vect_sequence.push_back(word);
    }
    if (numbers==0) cout << endl;
    for(int j =1; j<=numbers; j++) {
        aux = vect_sequence[vect_sequence.size()-j];
        for (int i = 1; i <= aux.size(); i++){
            cout << aux[aux.size()-i];
            if (i == aux.size()){
                cout << endl;
            }
        }
    }
        
}