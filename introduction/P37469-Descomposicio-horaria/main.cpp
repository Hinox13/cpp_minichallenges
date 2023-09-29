#include <iostream>
using namespace std;

int main(void){
    int n,h,s,m;
    cin>>n;
    h=n/3600;
    m=(n%3600)/60;
    s=(n%3600)%60;

    cout<<h<<" "<<m<<" "<<s<<endl;
}