

#include <iostream>
#include <cstdio> // за printf и scanf
#include <cstdlib> // за system("pause") ако се използва в Windows

using namespace std;

int main() {
    int choice;
    int value;

    cout << "Конвертор между десетична, шестнадесетична и осмична бройна система\n";

    while (true) {
        cout << "\nИзберете опция:\n";
        cout << " 1) Десетично -> Хекс/Октал\n";
        cout << " 2) Хекс -> Десетично/Октал\n";
        cout << " 3) Октал -> Десетично/Хекс\n";
        cout << " 0) Изход\n";
        cout << "Вашият избор: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Край на програмата.\n";
            break;
        }

        switch (choice) {
        case 1: {
            cout << "Въведете десетично цяло число: ";
            cin >> value;

            printf("Десетично: %d\n", value); // %d
            printf("Хекс (малки): %x\n", value); // %x
            printf("Хекс (главни): %X\n", value); // %X
            printf("Октал: %o\n", value); // %o
            break;
        }

        case 2: {
            cout << "Въведете шестнадесетично число (без 0x): ";
            scanf("%x", &value);

            printf("Хекс (въвеждано): %X\n", value);
            printf("Десетично: %d\n", value);
            printf("Октал: %o\n", value);
            break;
        }

        case 3: {
            cout << "Въведете осмично число: ";
            scanf("%o", &value);

            printf("Октал (въвеждано): %o\n", value);
            printf("Десетично: %d\n", value);
            printf("Хекс: %X\n", value);
            break;
        }

        default:
            cout << "Невалидна опция, опитайте пак.\n";
            break;
        }

        cin.clear(); // изчистване на грешки
        cin.ignore(10000, '\n'); // премахване на остатъци в буфера
    }

    return 0;
}