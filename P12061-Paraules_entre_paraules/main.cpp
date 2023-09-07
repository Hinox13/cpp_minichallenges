#include <iostream>
#include <string>
using namespace std;

string num_paraules(string sentence) {
    if (sentence.find("principi") != sentence.npos && sentence.find("final") != sentence.npos) {
        int principi = sentence.find("principi"), final = sentence.find("final");
        if (final - principi > 0) return to_string(final - principi);
    }
    return "sequencia incorrecta";
}


int main(){
    string sentence;
    getline(cin, sentence);
    cout << sentence.find("principi") << endl;
    // cout <<  num_paraules(sentence) << endl;
    return 0;
}