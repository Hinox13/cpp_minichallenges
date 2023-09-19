#include <iostream>
using namespace std;

int main(){
    int b,a,f;
    while (cin >> b >> a >> f)
    {
        if (a > 0 && b>0 && a>=f){
            cout << string(f, ' ') << string(b+1, '_') << endl;
            for (int i = 0; i < f; i++){
                cout << string(f-1-i, ' ') << '/';
                if (i == f-1){
                    cout << string(b, '_');
                } else {
                    cout << string(b, ' ');
                }
                cout << '/' << string(i, ' ') << '|' << endl;
            } 

            for (int i = 0; i < a; i++){
                if (a-i > f)
                {
                    cout << '|' << string(b, ' ') << '|' << string(f-1, ' ') << '|' << endl;
                } else
                {
                    if (i == a-1) {
                        cout << '|' << string(b, '_') << '|' << '/' << endl;
                    }else {
                        cout << '|' << string(b, ' ') << '|' << string(f-i, ' ') << '/' << endl;
                    }
                    
                }
            }
        }
        cout << endl;
    }
    

}