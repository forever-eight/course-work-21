#include <iostream>
#include "menu.h"
#include "storage.h"

using namespace std;

IInterviewStorage *interviews;

void selectEngine() {
    cout << "Engine" << endl;
    cout << "\t1. custom linked list" << endl;
    cout << "\t2. std::vector" << endl;

    int e;
    while (true) {
        cin >> e;
        switch (e) {
            case 1:
                // todo: custom linked list
                return;
            case 2:
                interviews = new VectorInterviewStorage;
                return;
            default:
                cout << "Engine not recognized, try again:" << endl;
        }
    }
}

void menu() {
    int m;
    int id;
    while (true) {
        cout << endl << endl << "Menu" << endl;
        cout << "\t1. Auto-generate (500'000)" << endl;
        cout << "\t2. Search" << endl;
        cout << "\t3. Add" << endl;
        cout << "\t4. Remove" << endl;
        cout << "\t5. Statistics" << endl;
        cout << "\t6. Exit" << endl;

        cin >> m;
        switch (m) {
            case 1:
                // todo: auto-gen
                break;
            case 2:
                // todo: search
                break;
            case 3:
                interviews->Add(InputInterview());
                break;
            case 4:
                cout << "Укажите ID:" << endl;

                cin >> id;
                interviews->Remove(id);
                break;
            case 5:
                interviews->Stats();
                break;
            case 6:
                delete interviews;
                // todo: exit
                return;
            default:
                cout << "Menu item not recognized, try again:" << endl;
                break;
        }
    }
}


