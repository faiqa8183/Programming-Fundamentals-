#include<iostream> 
using namespace std;  


int Trace(int data[50][50], int n) 
{ 
  int sum = 0; 

  for (int i=0; i<n; i++) 
    sum += data[i][i]; 

  return sum; 
} 


int main() 
{ 
    int matrixrix[50][50], n, m;


    cout<<"Enter the length of row of the matrix: ";
    cin >> m;
    cout<<"Enter the length of column of the matrix: ";
    cin >> n;

    if(m != n){
        cout<<"\nlength of row and column must be same.";
        exit(0);
    }

    
    cout << "\nInput the element of matrix: \n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin>>matrixrix[i][j];


  cout << "\nTrace of Matrix = "
    << Trace(matrixrix, n) << endl; 
  
  return 0; 
}