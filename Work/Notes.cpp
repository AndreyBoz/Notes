#include "Notes.h"
#include "NoteMenu.h"
#include <iostream>
using namespace std;
void addData(vector<NOTE>& data) {
	string author_t;
	string desk_t;
	string note_t;
	cout << "Введите автора: ";
	cin >> author_t;
	cout << "Не забудьте поставить точку в конце заметки или описания. ";
	cout << "Введите описание заметки: ";
	getline(cin, desk_t, '.');
	desk_t.erase(std::remove(desk_t.begin(), desk_t.end(), '\n'), desk_t.end());
	cout << "Не забудьте поставить точку в конце заметки или описания. ";
	cout << "Введите заметку: ";
	getline(cin, note_t,'.');
	note_t.erase(std::remove(note_t.begin(), note_t.end(), '\n'), note_t.end());
	data.push_back(NOTE(author_t, note_t, desk_t));
};
void delData(vector<NOTE>& data, unsigned ch_d) {
	auto iter = data.cbegin(); 
	data.erase(iter + ch_d);
};
void showData(vector<NOTE> &data) {
	bool f = true;
	unsigned choose = 0;
	unsigned ch_n = 0;
	unsigned ch_d = 0;
	while (f) {
		system("cls");
		for (int i = 0; i < data.size(); i++) {
			data[i].printData(i);
		}
		cout << "Меню:" << endl << "1. Добавить заметку" << endl << "2. Удалить заметку" << endl << "3. Просмотр заметки" << endl << "4. Выход" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1: addData(data); break;
		case 2: cout << "Введите номер заметки, которую хотите удалить: "; cin >> ch_d; ch_d--; delData(data, ch_d); break;
		case 3: cout << "Введите номер заметки, которую хотите посмотреть: "; cin >> ch_n; ch_n--; showNote(data, ch_n); break;
		case 4: f = false; break;
		default:
			cout << "Такого действия нет" << endl;
			system("pause");
			break;
		}
		
	}
};