//Nam Hai Dinh
//The main file

#include "header.h"

const int SIZE = 10;
const int SPACE = 3;

int main(){
    char  field [SIZE][SIZE]; //= new char[SIZE][SIZE];
    for (int i = 0; i < SIZE ; ++i) {
        for (int j = 0; j < SIZE ; ++j){
            field[i][j] = 'a';
        }
    }
    
    for (int i = 0; i < SIZE ; ++i) {
        for (int j = 0; j < SIZE ; ++j){
            if (field[i][j] == 'a')
                cout << '['<< i<<j << ']';
                if (j < SIZE){
                    cout << "----";
                }
        }
        cout << endl;
        if (i!=SIZE){
            for ( int g = 0; g < SPACE ; ++g ){
                cout << " |       |       |       |       |       |       |       |       |       |" << endl;
            }
        }
    }
}

