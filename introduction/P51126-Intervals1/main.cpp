#include <iostream>
using namespace std;

int main (void) {
int a1,b1,a2,b2;
cin >> a1;
cin >> b1;
cin >> a2;
cin >> b2;
if (b1 < a2) cout << "[]" << endl;
else if (b2 < a1) cout << "[]" << endl;
else if (a2 <= b1 and a1 <= a2 and b1 <= b2)
    cout << '[' << a2 << ',' << b1 << ']' << endl;
else if (a1 <= b2 and a2 <= a1 and b2 <= b1)
    cout << '[' << a1 << ',' << b2 << ']' << endl;
else if (a1 <= a2 and b2 <= b1)
    cout << '[' << a2 << ',' << b2 << ']' << endl;
else if (a2 <= a1 and b1 <= b2)
    cout << '[' << a1 << ',' << b1 << ']' << endl;
}