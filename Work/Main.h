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
	NOTE() {};
	NOTE(string author, string note, string description) {
		this->author = author;
		this->note = note;
		this->description=description;
	};
	void printData(unsigned i) { cout << "\tНомер: "<< i+1 << "\n\tАвтор: " << author << "\n\tОписание: " << description << "\n\n"; };
	void printDataNote(unsigned i) { cout << "\tНомер: " << i + 1 << "\n\tАвтор: " << author << "\n\tОписание: " << description << "\n\tЗаметка: " << note << "\n\n"; };
	void changeDesc(string desc) { description = desc; };
	void changeNote(string note_t) { note = note_t; };
	string getAuth() { return author; };
	string getNote() { return note; };
	string getDesc() { return description; };
	friend istream& operator>>(istream& fin, NOTE& data) {
		string auth_t;
		string desc_t;
		string note_t;
		getline(fin, auth_t, '.');
		auth_t.erase(remove(auth_t.begin(), auth_t.end(), '\n'), auth_t.end());
		data.author = auth_t;
		getline(fin, desc_t, '.');
		desc_t.erase(remove(desc_t.begin(), desc_t.end(), '\n'), desc_t.end());
		data.description = desc_t;
		getline(fin, note_t, '.');
		note_t.erase(remove(note_t.begin(), note_t.end(), '\n'), note_t.end());
		data.note = note_t;
		return fin;
	};
};


