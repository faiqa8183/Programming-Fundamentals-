#include <iostream>
using namespace std;

void calculateGrade( int marks, char &grade)
{


while(marks!=-1)
 {
if(marks>=80)
{
    grade='A';
      cout<<grade<<endl;
}

if (marks>=65 && marks<80)
{
grade='B';
cout<<grade<<endl;
}

if(marks>=50 && marks<65)
{ grade='C';
   cout<<grade<<endl;
}

if (marks<50)
{ grade='F';
   cout<<grade<<endl;
}

cout<<"Please enter the marks= ";
    cin>>marks;

}

}

int main ()
{
int marks;
char grade;
cout<<"Please enter the marks= ";
cin>>marks;

calculateGrade(marks, grade);


system("pause");
return 0;
}

