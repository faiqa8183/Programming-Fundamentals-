
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
int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cin_array(arr, 5);
    cout_array(arr, 5);

    return 0;
    
    
}