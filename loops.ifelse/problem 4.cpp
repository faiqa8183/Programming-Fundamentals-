#include <iostream>
using namespace std;
int main (){
	char let,a,e,i,o,u,A,E,I,O,U;
	cout << "enter your letter=";
	char let;
	cin >> let;
if (let >=='A' && let<=='Z' || let>=='a' && let == 'z')
{if let == ('A' || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' ||'i' ||'o' || 'u')
cout << "enter alphabet is vowel";
else 
	cout << "enter alphabet is consonant";
}
else 
	cout << "invalid output";
system ("pause");
return 0;
}