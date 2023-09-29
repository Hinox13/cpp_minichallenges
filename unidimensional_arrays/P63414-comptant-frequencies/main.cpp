#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int number, aux;
    vector<int> origin_squence;

    cin >> number;

    for (int i=0; i< number; i++){
        cin >> aux;
        origin_squence.push_back(aux);
    }
    sort(origin_squence.begin(), origin_squence.end());

    aux = 1;
    for (int i = 0; i<origin_squence.size(); i++){
        if (origin_squence[i]==origin_squence[i+1]) {
            aux++;
        }else {
            cout << origin_squence[i] << " : " << aux << endl;
            aux = 1;
        }
    }
    
}