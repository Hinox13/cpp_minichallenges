#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // Create variables and empty matrix
    int rows, columns, num;
    cin >> rows >> columns;
    int matrix[rows][columns];

    // Fill up matrix
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<columns; j++){
            cin >> num;
            matrix[i][j] = num;
        }
    }

    string command;
    int row, column;
    while (cin >> command){
        if (command == "fila"){
            cin >> row;
            cout << "fila " << row << ':';
            for (int i=0; i<columns; i++){
                cout << ' ' << matrix[row-1][i];
            }
            cout << endl;
        } else if (command == "columna")
        {
            cin >> column;
            cout << "columna " << column << ':';
            for (int i=0; i<rows; i++){
                cout << ' ' << matrix[i][column-1];
            }
            cout << endl;
        } else if (command == "element")
        {
            cin >> row >> column;
            cout << "element " << row << ' ' << column << ": " << matrix[row-1][column-1] << endl;
        }
    }
    return 0;
}