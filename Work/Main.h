#pragma once
#include <string>
#include <iostream>
using namespace std;
class NOTE
{
private:
	string author;
	string note;
	string description;

public: 
	NOTE(string author, string note, string description) {
		this->author = author;
		this->note = note;
		this->description=description;
	};
	void printData(unsigned i) { cout << "|  " << i+1 << "   |   " << author << "   |   " << description << "   |   " << endl; };
	void printDataNote(unsigned i) { cout << "|  " << i+1 << "   |   " << author << "   |   " << description << "   |   " << endl <<"Заметка: " << note << endl; };
	void changeDesc(string desc) { description = desc; };
	void changeNote(string note_t) { note = note_t; };
	string get_auth() { return author; };
	string get_note() { return note; };
	string get_desc() { return description; };
};

