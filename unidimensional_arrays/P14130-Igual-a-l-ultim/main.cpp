#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number, aux, count=0;
    vector<int> vect_numbers;
    cin >> number;
    for (int i = 0; i<number; i++){
        cin >> aux;
        vect_numbers.push_back(aux);
    }
    for (int i = 0; i < vect_numbers.size()-1; i++){
        if (vect_numbers[i]==(vect_numbers.back())) count++;
    }
    cout << count << endl;
}