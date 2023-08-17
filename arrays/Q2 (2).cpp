#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int mth = 3,			
	    day = 30;					
	char weather[mth][day];			

	int Sun,						
		Rain,					
		Cloudy,						
		totSun = 0,					
		totRain = 0,				
		totCloudy = 0,				
		lrgstRain = 0;				
		
	ifstream Read;					
	Read.open("RainOrShine.dat");	
	if (!Read)
		cout << "Error opening data file.";
	else
	{	
		for (int row = 0; row < mth; row++)
		{
			for (int col = 0; col < day; col++)
			{
				Read >> weather[row][col];
			}
		}
	}
	Read.close();					
	cout << "\n Three-month weather report\n";
	for (int row = 0; row < mth; row++)
	{
		Sun = Rain = Cloudy = 0;
		for (int col = 0; col < day; col++)
		{	
			switch (weather[row][col])
			{
				case 'S' : Sun++;
							break;
				case 'R' : Rain++;
							break;
				case 'C' : Cloudy++;
							break;
			}
		}
		cout << "\nFor the month of ";
		if (row == 0)
			cout << "June.\n";
		else if (row == 1)
			cout << "July.\n";
		else if (row == 2)
			cout << "August.\n";

		cout << "Rainy : " << Rain << endl
			 << "Sunny : " << Sun  << endl
			 << "Cloudy: " << Cloudy << endl;

		totSun += Sun;
		totRain += Rain;
		totCloudy += Cloudy;

		if(lrgstRain > Rain)
			lrgstRain = row;
	}
	cout << "\nFor the whole three-month period\n"
		 << "Rainy : " << totRain << endl
		 << "Sunny : " << totSun  << endl
		 << "Cloudy: " << totCloudy << endl;

	cout << "\nMonth with the largest number of rainy days: ";
		if (lrgstRain == 0)
			cout << "June.\n\n";
		else if (lrgstRain == 1)
			cout << "July.\n\n";
		else if (lrgstRain == 2)
			cout << "August.\n\n";

	return 0;
}