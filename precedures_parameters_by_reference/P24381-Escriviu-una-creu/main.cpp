#include <iostream>
using namespace std;

//te un error de presentació i surt taronja
void cross(int n, char c){
    if (n>=3 && n%2!=0){
        for (int i=0; i<n; i++){
            if (i == n/2){
                //cout << n/2 << endl;
                for (int j=0; j < n; j++){
                    cout << c;
                }
                cout << endl;
            } else {
                for (int j = 0; j < n; j++){
                    if (j == n/2){
                        cout << c;
                    } else {
                        cout << " ";
                    }
                }
                cout << endl;
            }   

        }
    } else cout <<endl;
    
}


int main(){
    int num1;
    char lletra;
    cin >> num1;
    cin >> lletra;
    cross(num1, lletra);
}