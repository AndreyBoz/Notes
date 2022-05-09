#include "NoteMenu.h"
#include <iostream>
using namespace std;
void changeDesc(vector<NOTE>& data, unsigned i) {
	string desc_t;
	cout << "�� �������� ��������� ����� � ����� ��������.";
	cout << "������� �������� �������: ";
	getline(cin, desc_t,'.');
	desc_t.erase(std::remove(desc_t.begin(), desc_t.end(), '\n'), desc_t.end());
	data[i].changeDesc(desc_t);
};
void changeNote(vector<NOTE>& data, unsigned i) {
	string note_t;
	cout << "�� �������� ��������� ����� � ����� �������. ";
	cout << "������� �������: ";
	getline(cin, note_t, '.');
	note_t.erase(std::remove(note_t.begin(), note_t.end(), '\n'), note_t.end());
	data[i].changeNote(note_t);
};
void showNote(vector<NOTE>& data,unsigned& i) {
	bool f = true;
	unsigned a = 0;
	while (f) {
		system("cls");
		data[i].printDataNote(i);
		cout << "���� ��������������: " << endl << "1. �������� ��������" << endl << "2. �������� �������" << endl << "3. �����" << endl << "�������� ��������: ";
		cin >> a;
		switch (a) {
		case 1: changeDesc(data, i); break;
		case 2: changeNote(data, i); break;
		case 3: f = false; break;
		default:
			cout << "������, �� ������� ������������ ��������.";
			break;
		}
	}
};