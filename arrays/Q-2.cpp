#include <iostream>
using namespace std;

void cout_array(int arr[], int n)
{
    for (int i=0; i<n ; i++)
    {
        cout << arr[i] << "\t";
    }
}
void cin_array(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Enter " << i << " element : ";
        cin >> arr[i];
    }
}
int add_array(int arrA[], int arrB[], int arrC[], int n)
{
    for(int i=0;i<n;i++)
    {
        arrC[i] = arrA[i]+arrB[i];
    }
}
int sub_array(int arrA[], int arrB[], int arrC[], int n)
{
    for(int i=0;i<n;i++)
    {
        arrC[i] = arrA[i]-arrB[i];
    }
}
int multiply_array(int arrA[], int arrB[], int arrC[], int n)
{
    for(int i=0;i<n;i++)
    {
        arrC[i] = arrA[i] * arrB[i];
    }
}
int divide_array(int arrA[], int arrB[], int arrC[], int n)
{
    for(int i=0;i<n;i++)
    {
        arrC[i] = arrA[i]/arrB[i];
    }
}
int main()
{

    int arrA[10];
    int arrB[10];
    int arrC[10];
    cin_array(arrA, 10);
    cin_array(arrB, 10);
    cout_array(arrA, 5);
    add_array(arrA, arrB, arrC, 5);
    cout_array(arrC, 5);
    sub_array(arrA, arrB, arrC, 5);
    cout_array(arrC, 5);
    divide_array(arrA, arrB, arrC, 5);
    cout_array(arrC, 5);
    multiply_array(arrA, arrB, arrC, 5);
    cout_array(arrC, 5);

    return 0;
    
    
}