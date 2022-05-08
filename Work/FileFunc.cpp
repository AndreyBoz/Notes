#include "FileFunc.h"
#include <fstream>
void openFile(vector<NOTE>& data) {
	unsigned i = 0;
	string filename;
	string auth_t;
	string desk_t;
	string note_t;
	data.clear();
	cout << "¬ведите название файла: ";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	while (!fin.eof()-1) {
		fin >> auth_t;
		getline(fin,desk_t,'.');
		getline(fin, note_t,'.');
		data.push_back(NOTE(auth_t, note_t, desk_t));
	}
	fin.close();
};
void saveFile(vector<NOTE>& data) {
	string filename;
	cout << "¬ведите название файла: ";
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	for (int i = 0; i < data.size(); i++) {
		fout << data[i].get_auth() << ".\n";
		fout << data[i].get_desc() << ".\n";
		fout << data[i].get_note() << ".\n";
	}
	fout.close();
};