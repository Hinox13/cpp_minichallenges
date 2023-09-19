#include <iostream>
#include <string>
using namespace std;



int main(){
    string sentence;
    getline(cin, sentence);

    int i = 0, count = 0;
    while (i < sentence.length() && sentence[i] != '.'){
        if (sentence[i] == 'a') count++;
        i++;
    }
    cout << count << endl;

}