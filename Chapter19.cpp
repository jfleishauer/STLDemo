/*
Jaime Fleishauer
07.14.2020
CIT-245-20SU
Chapter 19 - STL Assignment

Create a map and store social security numbers by names.
Iterate through your container and retrieve all names.
Seach for an individual name and print the ssn.
Search for a name that is not found.

*/


#include <iostream>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main() {
	int cycle = 1;//Loop variable

	do {
	//creating a map and storing ssns by names
	map<string, int> ssn;
	ssn["Paul Brown"] = 123456790;
	ssn["Mary Smith"] = 123456791;
	ssn["John Smith"] = 123456789;
	ssn["Lisa Brown"] = 123456792;

	//iterating through ssns container
	map<string, int>::iterator itr;

	cout << "iterating through list... " << endl;

	for (itr = ssn.begin(); itr != ssn.end(); ++itr) {
		cout << itr->second << ':' << itr->first << endl;
	}

	//searching for two names one which is present in the map one there isn't
	int i = 0;
	string name;

	while (i < 2) {
		cout << "\nEnter a name: ";
		getline(cin, name);

		if (ssn[name]) {
			cout << name << " found " << ssn[name] << endl;
		}

		else {
			cout << name << " not found" << endl;
		}
		i++;
	}

	

	//Loop to retry
	cout << "Try again? (1 = Yes, 0 = Exit) ";
	cin >> cycle;
	cout << endl;

	} while (cycle != 0);

}