#include "FileFunc.h"
#include <fstream>
void openFile(vector<NOTE>& data) {
	system("chcp 1251");
	string filename;
	data.clear();
	cout << "������� �������� �����: ";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	if (!fin) {
		cout << "���� �� ������." << endl;
		system("pause");
	}
	else {
		NOTE tmp;
		while (fin >> tmp) {
			data.push_back(tmp);
		}
		fin.close();
	}
	
};
void saveFile(vector<NOTE>& data) {
	string filename;
	cout << "������� �������� �����: ";
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	for (int i = 0; i < data.size(); i++) {
		fout << data[i].getAuth() << ".\n";
		fout << data[i].getDesc() << ".\n";
		fout << data[i].getNote() << ".\n";
	}
	fout.close();
};