#include <iostream>
using namespace std;

int main(void){
    int A,B,C,Mayor;
    cin>>A>>B>>C;

    if((B>=A)and (B>=C)){
        Mayor=B;
    }
    else {
        if((A>=C)  and (A>=B)){
            Mayor=A;
        }
        else {
            Mayor=C;
        }
    }

    cout<<Mayor<<endl;
}