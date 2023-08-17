#include <iostream>

using namespace std;

int main()
{
int arr[4][10];
float avg[10];


for(int i=0;i<3;i++)
{ cout<<"enter the data for monkey"<<i<<" :";
for(int j=0;j<7;j++)
{
cin>>arr[i][j];
if(arr[i][j]<0)
{
cout<<"enter postive numbers for pounds of food eaten";
  
return 0;
}
}

}

for(int j=0;j<7;j++)
{
avg[j]=float(arr[0][j]+arr[1][j]+arr[2][j])/3;
}

int largest=arr[0][0];
int smallest=arr[0][0];

for(int i=0;i<3;i++)
{
for(int j=0;j<7;j++)
{
if(largest<arr[i][j])
{
largest=arr[i][j];

}

if(smallest>arr[i][j])
{
smallest=arr[i][j];
}
}
}
cout<<"_Report_"<<endl;
cout<<"Average food eaten by monkeys:"<<endl ;
for(int j=0;j<7;j++)
{
cout<<"Day "<<j+1<<":" <<avg[j]<<endl;
}
cout<<"The least amount of food eaten by monkeys :"<<smallest<<endl;
cout<<"The greatest amount of food eaten by monkeys :"<<largest;
}
