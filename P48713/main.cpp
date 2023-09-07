#include <iostream>
#include <cmath>
using namespace std;

bool es_primer(int num) {
    // We know 1 is not a prime number
    if (num <= 1) {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= num) {
        // Check if i divides x without leaving a remainder
        if (num % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

int main(){
    int inputs, input;
    cin >> inputs;

    for (int i = 0; i < inputs; i++){
        cin >> input;
        if (es_primer(input)) {
            cout << input << " es primer" << endl;
        }
        else {
            cout << input << " no es primer"<< endl;
        }
    }

    return 0;
}