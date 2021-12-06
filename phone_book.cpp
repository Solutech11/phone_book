// phone_book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
	//std::cout << "Hello World!\n";
	int as = 1;
	int gb = 1;
	int i = 0;

	double phnBook[] = { 2 };

	while (as == 1)
	{
		cout << "\n---------US-Phonebook--------\n" << "N for new contact \n" << "V for view contact\n" << "E to Exit\n";
		string g;
		cout << "\ninput:  ";
		cin >> g;

		if (g == "N" or g == "n")
		{
			//cout << i << endl;

			cout << "(555)  ";
			double number;

			cin >> number;

			int length = log10(number)+1;
			//cout << length;
			if (length == 6) {
				phnBook[i] = number;
				i++;
				cout << "\n added succefully\n";

			}else {
				cout << "\n number too long or short\n";
			}
			

			//name="";
			/*as = as + 1;
			gb = gb + 1;*/
		}
		else if (g == "v" or g == "V")
		{
			for (int c = 0; c < i; c++) {
				cout << "\n"<< c<<". (555)" << phnBook[c] << endl;
			}
		}
		else if (g == "E" or g == "e")
		{
			cout << "\n\nAre you sure?? (Y or N)\n";
			string pic;
			cin >> pic;

			if (pic == "y" or pic == "Y") {
				as++;
			}
			else if(pic=="N" or pic=="n") {
				cout << "\nok sir\n";
			}

		}

	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
