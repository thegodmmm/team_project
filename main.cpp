//	Командный	проект.	Группа	ПИ-51.
//	Команда:	Чепуштанов	(в.	24),	Максимов	(в.	38,	техлид).
#include	<iostream>
#include "chepushtanov.h"
//	===	БЛОК	ПОДКЛЮЧЕНИЙ:	каждый	участник	добавляет	свой	заголовочный	файл	===

//	===	КОНЕЦ	БЛОКА	ПОДКЛЮЧЕНИЙ	===
using	namespace	std;
int	main() {
	int	choice;
	do {
		cout << "\n===	Командный	проект:	сборник	расчётов	===\n";
		cout << "1. Кинетическая энергия тела\n";
        cout << "2. Импульс тела\n";
		cout << "0.	Выход\n";
		cout << "Выберите	пункт:	";
		cin >> choice;
		switch (choice) {
		case 1: {
                	double m, v;
                	cout << "Введите массу тела (m) в кг и скорость (v) в м/с: ";
                	cin >> m >> v;
                	cout << "Кинетическая энергия = " << kineticEnergy(m, v) << " Дж\n";
                	break;
                }
                case 2: {
                	double m, v;
                	cout << "Введите массу тела (m) в кг и скорость (v) в м/с: ";
                	cin >> m >> v;
                	cout << "Импульс = " << momentum(m, v) << " кг*м/с\n";
                	break;
            	}
		case	0:
			cout << "Работа	завершена.\n";
			break;
		default:
			cout << "Такого	пункта	нет.\n";
		}
	} while (choice != 0);
	return	0;
}
