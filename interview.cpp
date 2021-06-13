#include <iostream>
#include "interview.h"

using namespace std;


string Interview::DescribeNumber() {
    return "ID";
};

string Interview::DescribeSex() {
    return "Пол (0. Муж, 1. Жен, 2. Атакующий вертолет)";
};

string Interview::DescribeAge() {
    return "Возраст";
};

string Interview::DescribeEducation() {
    return "Уровень образования (0. Нет, 1. Школа, 2. Шарага)";
};

string Interview::DescribeKnownBanks() {
    return "Известные Вам банки, через запятую (0. Открытие, 1. Сбер, 2. Тинькофф, 3. Альфа)";
};

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

void Interview::InputKnownBanks() {
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
}

void Interview::InputReason() {
    cout << DescribeReason() << ":" << endl;
    cin >> Reason;
};
