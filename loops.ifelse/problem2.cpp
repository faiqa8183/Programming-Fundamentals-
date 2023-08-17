#include <iostream>
using namespace std;
int main (){
	int speed;
	int value ;
	int bday;
	cout << "if your bday press 2 otherwise press 3 \n";
	cin >>bday;
	cout << "0=no ticket \n 1= small ticket \n 2= big ticket \n";
	cout << "enter the speed:\n";
	cin >> speed;
	if (bday == 1)
	{if( speed <=65)
	cout << "0";
	else if (speed>65 && speed<85)
		cout <<" 1";
	else if (speed>85)
		cout << 2;
	}
	else {
		if (speed<=60)

			cout <<0;
		else if (speed>60 && speed<80)
			cout << "1";
		else if (speed>80)
			cout << "2";
	}
	system ("pause");
	return 0;
}
