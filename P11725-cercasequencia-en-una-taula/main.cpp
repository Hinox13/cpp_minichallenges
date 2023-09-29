#include <iostream>
#include <vector>

using namespace std;

bool hi_es(int x, const vector<int>& v){
    for (int i =0; i<v.size();i++){
        if (v[i] == x) return true;
    }
    return false;
}


int main(){
    int x = 2;
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    cout << hi_es(x, v);
}