#include <iostream>
using namespace std;

bool is_prime(int num){
    if (num <= 1){
        return false;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num%i == 0) return false;
    }
    return true;
}

int main(){
    int num;

    // while (cin >> num){
    //     cout << is_prime(num) << endl;
    // }
    cin >> num;
    while (is_prime(num)) {
        int aux = num+1;
        while (!is_prime(aux)) {
            aux+=1;
        }
        cout << aux << endl;
        cin >> num;
    }
}