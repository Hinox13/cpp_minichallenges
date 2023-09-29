#include <iostream>
#include <vector>

using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v){
    double result=0;
    for (int i=0; i<u.size();i++){
        result = result + u[i]*v[i];
    }
    return result;
}


int main(){
    vector<double> u{10,20,30};
    vector<double> v{1,2,3};
    
    cout << producte_escalar(u,v) << endl;

}