#include <iostream>
using namespace std;


void count_and_add(int& num, int& sum){
    num=0;
    sum=0;
    int number;
    while (cin >> number){
        num++;
        sum = sum + number;
    }
}