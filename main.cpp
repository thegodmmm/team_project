//	Командный	проект.	Группа	ПИ-51.
//	Команда:	Чепуштанов	(в.	24),	Максимов	(в.	38,	техлид).
#include	<iostream>
#include	<Windows.h>
//	===	БЛОК	ПОДКЛЮЧЕНИЙ:	каждый	участник	добавляет	свой	заголовочный	файл	===
#include "maximov.h"
#include "chepushtanov.h
//	===	КОНЕЦ	БЛОКА	ПОДКЛЮЧЕНИЙ	===
using	namespace	std;
int	main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int	choice;
	double a, b, c;
	do {
		cout << "\n===	Командный	проект:	сборник	расчётов	===\n";
		cout << "1. Кинететическая энергия тела\n";
		cout << "2. Импульс тела\n";
		cout << "3.	Работа\n";
		cout << "4.	Теплота\n";
		cout << "0.	Выход\n";
		cout << "Выберите	пункт:	";
		cin >> choice;
		switch (choice) {
		case 1: {
			double m, v;
			cout << "Введите массу тела (m) в кг и скорость (v) в м/с:: ";
			cin >> m >> v;
			cout << "Кинетическая энергия = " << kineticEnergy(m, v) << " Дж\n" ��\n";
			break;
		}
		case 2: {
			double m, v;
			cout << "Введите массу тела (m) в кг и скорость (v) в м/с:  ";
			cin >> m >> v;
			cout << "Импульс = " << momentum(m, v) << " кг*м/с\n";
			break;
		}
		case	3:
			cout << "Введите напряжение U в вольтах, силу тока I в амперах и время t в секундах:	";
			cin >> a >> b >> c;
			cout << "Работа	 в джоулях	=	" << currentWork(a, b, c) << "\n";
			break;
		case	4:
			cout << "Введите	силу тока I в амперах, сопротивление R в омах и время  t в секундах:	";
			cin >> a >> b >> c;
			cout << "Теплота в джоулях	=	" << jouleHeat(a, b, c) << "\n";
			break;		
		case	0:
			cout << "Работа	завершена.\n";
			break;
		default:
			cout << "Такого	пункта	нет.\n";
		}
	} while (choice != 0);
	return	0;
}
