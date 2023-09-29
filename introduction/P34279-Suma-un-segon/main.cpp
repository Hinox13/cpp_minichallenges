#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int n,h,s,m,h1,m1,s1;
    cin>>h>>m>>s;


    n=h*3600+m*60+s+1;

    h1=n/3600;
    m1=(n%3600)/60;
    s1=(n%3600)%60;

    while (h1>=24){
        h1=h1-24;
    }


    cout <<setfill ('0') << setw (2)<<h1<<":"<<setfill ('0') <<setw (2)<<m1<<":"<<setfill ('0') <<setw (2)<<s1<<endl;

}