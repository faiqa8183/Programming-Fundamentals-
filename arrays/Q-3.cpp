#include <iostream>
using namespace std;


int main(){
    
    int row;
    int col;
    cin >> row;
    cin >>col;

    int array[row][col], vrtlflip[row][col], hrztlflip[row][col];


     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin >> array[i][j];
        }

    }

    
    cout << "orginal: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    cout << endl;

    
    
    
    
    for(int i=0; i<row; i++){
            for(int j=i-1; j<col; j++)
    {
       vrtlflip[i][j]=array[row-1-i][col-1-j];
    }
    }


    cout << "Vertical Flip: " << endl;
    for(int i=0; i<col; i++){
            for(int  j=0; j<row; j++)
    {
        cout << vrtlflip[i][j] << " " ;

    }
    cout << endl;
    }
    
     cout<< endl;
    
    for(int i=row-1; i>=0; i--){
            for(int j=0; j<col; j++)
    {
       hrztlflip[row-i-1][j]=array[i][j];
    }
    }
    cout << "horizontal Flip: " << endl;
    for(int i=0; i<col; i++){
            for(int  j=0; j<row; j++)
    {
        cout << hrztlflip[i][j] << " " ;

    }
    cout << endl;
    }

    return 0;
}