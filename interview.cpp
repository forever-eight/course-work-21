#include <iostream>
#include "interview.h"

using namespace std;

string NotAvailable = "N/A";

// Преобразует enum в его строковое представление для вывода на экран
string PrintEEducation(EEducation e) {
    switch (e) {
        case None:
            return "None";
        case Graduate:
            return "Graduate";
        case School:
            return "School";
    }
    // Такого ENum не предусмотрено
    return NotAvailable;
}

string PrintESex(ESex s) {
    switch (s) {
        case Male:
            return "Male";
        case Female:
            return "Female";
        case NonBinary:
            return "NonBinary";
    }
    return NotAvailable;
}

string PrintEBank(EBank b) {
    switch (b) {
        case Alpha:
            return "Alpha";
        case Open:
            return "Open";
        case Sber:
            return "Sber";
        case Tinkoff:
            return "Tinkoff";
    }
    return NotAvailable;
}

string PrintEProduct(EProduct p) {
    switch (p) {
        case Credit:
            return "Credit";
        case Investment:
            return "Investment";
    }
    return NotAvailable;
}

string PrintEOpinion(EOpinion o) {
    switch (o) {
        case Excellent:
            return "Excellent";
        case Well:
            return "Well";
        case OK:
            return "OK";
        case VeryBad:
            return "VeryBad";
        case Cringe:
            return "Cringe";
    }
    return NotAvailable;
}

string Interview::DescribeID() {
    return "ID";
};

string Interview::DescribeSex() {
    return "Пол (0. Муж, 1. Жен, 2. Атакующий вертолет)";
};

string Interview::DescribeAge() {
    return "Возраст";
};

string Interview::DescribeEducation() {
    return "Уровень образования (0. Нет, 1. Школа, 2. Университет)";
};

/*string Interview::DescribeKnownBanks() {
    return "Известные Вам банки, через запятую (0. Открытие, 1. Сбер, 2. Тинькофф, 3. Альфа)";
};*/

string Interview::DescribeReason() {
    return "Причина";
};

void Interview::InputSex() {
    cout << DescribeSex() << ":" << endl;
    int inp;
    cin >> inp;
    Sex = static_cast<ESex>(inp);
};

void Interview::InputAge() {
    cout << DescribeAge() << ":" << endl;
    cin >> Age;
};

void Interview::InputEducation() {
    cout << DescribeEducation() << ":" << endl;
    int inp;
    cin >> inp;
    Education = static_cast<EEducation>(inp);
};

/*void Interview::InputKnownBanks() {
    cout << DescribeKnownBanks() << ":" << endl;
    int b;
    for (int j = 0; j < 4; ++j) {
        if (cin.eof()) {
            break;
        }
        cin >> b;
        KnownBanks.push_back(static_cast<EBank>(b));
        cin.ignore(numeric_limits<streamsize>::max(), ',');
    }
}*/

void Interview::InputReason() {
    cout << DescribeReason() << ": " << endl;
    cin.ignore();
    getline(cin, Reason);
};

Interview *InputInterview() {
    Interview *interview = new Interview;

    // Все вручную введенные имеют id >= 300'000, чтобы не перепутать с автогенерированными
    interview->ID = arc4random() % 100000 + 300000;

    cout << endl << "Заполните все поля опроса" << endl;
    // todo: сделать и вызвать для всех полей
    interview->InputSex();
    interview->InputAge();
    interview->InputEducation();
//    interview->InputKnownBanks();
    interview->InputReason();

    return interview;
}

void PrintInterview(Interview *i) {
    // todo: сделать вывод для всех полей
    cout << "ID " << i->ID << endl;
    cout << "\tSex: " << i->Sex << endl;
    cout << "\tAge: " << i->Age << endl;
    cout << "\tEducation: " << PrintEEducation(i->Education) << endl;
    cout << "\tMain bank: " << PrintEBank(i->MainBank) << endl;
    cout << "\tReason: " << i->Reason << endl;
}