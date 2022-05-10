#include "NoteMenu.h"
#include <iostream>
using namespace std;
void changeDesc(vector<NOTE>& data, unsigned i) {
	string desc_t;
	cout << "Don't forget to put a period at the end of the description. ";
	cout << "Enter a description of the note: ";
	getline(cin, desc_t,'.');
	desc_t.erase(std::remove(desc_t.begin(), desc_t.end(), '\n'), desc_t.end());
	data[i].changeDesc(desc_t);
};
void changeNote(vector<NOTE>& data, unsigned i) {
	string note_t;
	cout << "Don't forget to put a period at the end of the description. ";
	cout << "Enter a note: ";
	getline(cin, note_t, '.');
	note_t.erase(std::remove(note_t.begin(), note_t.end(), '\n'), note_t.end());
	data[i].changeNote(note_t);
};
void showNote(vector<NOTE>& data,unsigned& i) {
	bool f = true;
	char a;
	while (f) {
		system("cls");
		data[i].printDataNote(i);
		cout << "Edit Menu: " << endl << "1. Change the description." << endl << "2. Edit the note." << endl << "3. Exit." << endl << "Select an action: ";
		cin >> a;
		switch (a) {
		case '1': changeDesc(data, i); break;
		case '2': changeNote(data, i); break;
		case '3': f = false; break;
		default:
			cout << "Error, you have chosen the wrong action.";
			break;
		}
	}
};