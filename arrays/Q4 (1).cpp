#include<iostream>

using namespace std;

int search(char paragraph[], char substring[])
{
	int flag = 0;
	int counter = 0;
	int j = 0;
	for (int i = 0; i < strlen(paragraph) - 1; i++)
	{
		j = 0;
		flag=0;
		if (paragraph[i] == substring[j])
		{
			for (; j < strlen(substring) - 1 && flag==0; j++)
			{
				if (paragraph[i + j] != substring[j])
				{
					flag == 1;
				}
				else
				{
					
					if (j == strlen(substring) - 2)
					{
						counter++;
						flag = 1;
					}
				}
			}
		}
	}
	return counter;
}

int main()
{
	char data[500];
	char key[50];
	cout << "Enter text: \n";
	gets_s(data);
	cout << endl;
	cout << "Enter word to be searched: \n";
	gets_s(key);

	cout << endl << "The substring \"" << key << "\" appears in the paragraph " << search(data, key) << " times";
	cout << endl;
	getchar();
	return 0;
}