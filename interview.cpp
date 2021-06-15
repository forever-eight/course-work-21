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

string DescribeID() {
    return "ID";
};

string DescribeSex() {
    return "Пол (0. Муж, 1. Жен, 2. Атакующий вертолет)";
};

string DescribeAge() {
    return "Возраст";
};

string DescribeSalary() {
    return "Зарплата";
}

string DescribeEducation() {
    return "Уровень образования (0. Нет, 1. Школа, 2. Университет)";
};

string DescribeMainBank() {
    return "Основной банк (0. Открытие, 1. Сбер, 2. Тинькофф, 3. Альфа)";
};

string DescribeBestBank() {
    return "Лучший банк (0. Открытие, 1. Сбер, 2. Тинькофф, 3. Альфа)";
};

string DescribeWorstBank() {
    return "Худший банк (0. Открытие, 1. Сбер, 2. Тинькофф, 3. Альфа)";
};

string DescribeReason() {
    return "Причина";
};

string DescribeProducts() {
    return "Продукты, которым вы пользовались(0.Кредит, 1. Инвестиции)\n";
};

string DescribeKids() {
    return "Количество детей";
};

string DescribeOpinion() {
    return "Мнение";
};

string DescribeGlad() {
    return "Довольство банком";
};

string DescribeDate() {
    return "Дата";
};

string DescribeNeeded() {
    return "Нужды";
};

string DescribeInterior() {
    return "Довольство интерьером";
};

string DescribeInvestment() {
    return "Сколько раз вы инвестировали";
};

string DescribeHowMuch(){
    return "Как много";
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

void Interview::InputSalary() {
    cout << DescribeSalary() << ":" << endl;
    cin >> Salary;
};

void Interview::InputEducation() {
    cout << DescribeEducation() << ":" << endl;
    int inp;
    cin >> inp;
    Education = static_cast<EEducation>(inp);
};

void Interview::InputReason() {
    cout << DescribeReason() << ": " << endl;
    cin.ignore();
    getline(cin, Reason);
}

void Interview::InputKids() {
    cout << DescribeKids() << ":" << endl;
    cin >> Kids;
}

void Interview::InputMainBank() {
    cout << DescribeMainBank() << ":" << endl;
    int inp;
    cin >> inp;
    MainBank = static_cast<EBank>(inp);
}

void Interview::InputBestBank() {
    cout << DescribeBestBank() << ":" << endl;
    int inp;
    cin >> inp;
    BestBank = static_cast<EBank>(inp);
}

void Interview::InputWorstBank() {
    cout << DescribeWorstBank() << ":" << endl;
    int inp;
    cin >> inp;
    WorstBank = static_cast<EBank>(inp);
}

void Interview::InputProducts() {
    cout << DescribeProducts() << ":" << endl;
    int inp;
    cin >> inp;
    Products = static_cast<EProduct>(inp);
}

void Interview::InputGlad() {
    cout << DescribeGlad() << ":" << endl;
    cin >> Kids;
}

void Interview::InputNeeded() {
    cout << DescribeNeeded() << ": " << endl;
    cin.ignore();
    getline(cin, Needed);
}

void Interview::InputInterior() {
    cout << DescribeInterior() << ":" << endl;
    cin >> Interior;
}

void Interview::InputInvestment() {
    cout << DescribeInvestment() << ":" << endl;
    cin >> Investment;
}

void Interview::InputHowMuch() {
    cout << DescribeHowMuch() << ":" << endl;
    cin >> HowMuch;
}

void Interview::InputOpinion() {
    cout << DescribeOpinion() << ":" << endl;
    int inp;
    cin >> inp;
    Opinion = static_cast<EOpinion>(inp);
}

void Interview::InputDate() {
    cout << DescribeDate() << ": " << endl;
    cin.ignore();
    getline(cin, Date);
};

Interview *InputInterview() {
    Interview *interview = new Interview;

    // Все вручную введенные имеют id >= 300'000, чтобы не перепутать с автогенерированными
    interview->ID = arc4random() % 100000 + 500000;

    cout << endl << "Заполните все поля опроса" << endl;
    interview->InputSex();
    interview->InputAge();
    interview->InputSalary();
    interview->InputKids();
    interview->InputEducation();
    interview->InputMainBank();
    interview->InputBestBank();
    interview->InputWorstBank();
    interview->InputProducts();
    interview->InputGlad();
    interview->InputReason();
    interview->InputNeeded();
    interview->InputInterior();
    interview->InputInvestment();
    interview->InputHowMuch();
    interview->InputOpinion();
    interview->InputDate();

    cout << "Added, ID " << interview->ID;

    return interview;
}

void PrintInterview(Interview *i) {
    cout << "ID " << i->ID << endl;
    cout << "\tSex: " << i->Sex << endl;
    cout << "\tAge: " << i->Age << endl;
    cout << "\tSalary " << i->Salary << endl;
    cout << "\tKids: " << i->Kids << endl;
    cout << "\tEducation: " << PrintEEducation(i->Education) << endl;
    cout << "\tMain bank: " << PrintEBank(i->MainBank) << endl;
    cout << "\tBest bank: " << PrintEBank(i->BestBank) << endl;
    cout << "\tWorst bank: " << PrintEBank(i->WorstBank) << endl;
    cout << "\tProducts: " << PrintEProduct(i->Products) << endl;
    cout << "\tGlad: " << i->Glad << endl;
    cout << "\tReason: " << i->Reason << endl;
    cout << "\tNeeds: " << i->Needed << endl;
    cout << "\tInterior: " << i->Interior << endl;
    cout << "\tInvestments: " << i->Investment << endl;
    cout << "\tHow much: " << i->HowMuch << endl;
    cout << "\tOpinion: " << PrintEOpinion(i->Opinion) << endl;
    cout << "\tDate: " << i->Date << endl;
}