#include <iostream>
#include "menu.h"
#include "interview.h"
using namespace std;

vector<Interview*> answers;

Interview* interview;

Interview* AddInterview() {
    interview = new Interview;

    // todo: сделать и вызвать для всех полей
    interview->InputSex();
    interview->InputAge();
    interview->InputEducation();
    interview->InputKnownBanks();
    interview->InputReason();

    return interview;
}

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
                // todo: std vector
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
                // todo: add
                AddInterview();
                return;
            case 4:
                // todo: remove
                return;
            case 5:
                // todo: stats
                return;
            case 6:
                // todo: exit
                return;
            default:
                cout << "Menu item not recognized, try again:" << endl;
        }
    }
}


