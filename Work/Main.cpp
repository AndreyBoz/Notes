#include "Main.h"
#include "Notes.h"
#include "FileFunc.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
	system("chcp 1251");
	vector <NOTE> data;
	bool t = true;
	while (t) {
		unsigned i = 0;
		cout << "\x1B[2J\x1B[HMain menu:" << endl;
		cout << "1. Show notes." << endl << "2. Save." << endl << "3. Open." << endl << "4. Exit." << endl << "Select an action: ";
		cin >> i;
		switch (i)
		{
		case 1: showData(data); break;
		case 2: saveFile(data); break;
		case 3: openFile(data); break;
		case 4: t = false; break;
		default:
			cout << "There is no selected action." << endl;
			break;
		}
	}
};