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
		cout << "\x1B[2J\x1B[H���� �������:" << endl;
		cout << "1. �������� �������." << endl << "2. ���������" << endl << "3. ���������" << endl << "4. �����" << endl << "�������� ��������: ";
		cin >> i;
		switch (i)
		{
		case 1: showData(data); break;
		case 2: saveFile(data); break;
		case 3: openFile(data); break;
		case 4: t = false; break;
		default:
			cout << "���������� �������� ���." << endl;
			break;
		}
	}
};