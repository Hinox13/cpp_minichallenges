#include <iostream>
#include <string>
using namespace std;

int count(char letter, string sentence){
    int count = 0;
    for (char i : sentence) {
        if (i == letter) count+=1;
    }
    return count;
}

int main(){
    string sentence;
    cin >> sentence;
    if (sentence.length() > 0 ){
        if ('(' == sentence[0] && ')' == sentence.back()) {
            if (count('(', sentence) == count(')', sentence)) cout << "si" << endl;
            else cout << "no" << endl;
        }
        else cout << "no" << endl;
    }
    else cout << "si" << endl;
    return 0;
}