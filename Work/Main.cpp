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
		cout << "\x1B[2J\x1B[HМеню заметки:" << endl;
		cout << "1. Показать заметки." << endl << "2. Сохранить" << endl << "3. Загрузить" << endl << "4. Выход" << endl << "Выберите действие: ";
		cin >> i;
		switch (i)
		{
		case 1: showData(data); break;
		case 2: saveFile(data); break;
		case 3: openFile(data); break;
		case 4: t = false; break;
		default:
			cout << "Выбранного действия нет." << endl;
			break;
		}
	}
};