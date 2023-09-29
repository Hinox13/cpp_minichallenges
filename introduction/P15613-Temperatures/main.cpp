#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    if(t>30){
        cout<<"fa calor"<<endl;
        if(t>=100){
            cout<<"l'aigua bulliria"<<endl;
        }
    }
    else if(t<=30 and t>=10){
        cout<<"s'esta be"<<endl;
    }
    else if(t<=10){
            cout<<"fa fred"<<endl;
            if(t<=0){
                cout<<"l'aigua es gelaria"<<endl;
        }
    }
}
