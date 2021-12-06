// phone_book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	//std::cout << "Hello World!\n";
	int as = 1;
	int gb = 1;
	int i = 1;

	int phnBook[] = { 2, };

	while (as == 1)
	{
		cout << "\n---------Phonebook--------\n" << "N for new contact \n" << "V for view contact\n" << "E to Exit\n";
		string g;
		cin >> g;

		if (g == "N" or g == "n")
		{
			cout << "Name:  ";
			int name;

			cin >> name;

			phnBook[i] = name;
			i = i + 1;
			//name="";
			/*as = as + 1;
			gb = gb + 1;*/
		}
		else if (g == "v" or g == "V")
		{
			for (int c = 0; c < i; c++) {
				cout << "\n" << phnBook[c] << endl;
			}
		}
		else if (g == "E" or g == "e")
		{
			cout << "\n\nAre you sure??\n";
			string pic =
				as = 29;
		}

	}

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
