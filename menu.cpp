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

void selectMenu() {
    cout << "Menu" << endl;
    cout << "\t1. Auto-generate (500'000)" << endl;
    cout << "\t2. Search" << endl;
    cout << "\t3. Add" << endl;
    cout << "\t4. Remove" << endl;
    cout << "\t5. Statistics" << endl;
    cout << "\t6. Exit" << endl;

    int m;
    while (true) {
        cin >> m;
        switch (m) {
            case 1:
                // todo: auto-gen
                return;
            case 2:
                // todo: search
                return;
            case 3:
                interviews->Add(InputInterview());
                return;
            case 4:
                // todo: remove
                return;
            case 5:
                // todo: stats
                return;
            case 6:
                delete interviews;
                // todo: exit
                return;
            default:
                cout << "Menu item not recognized, try again:" << endl;
        }
    }
}


