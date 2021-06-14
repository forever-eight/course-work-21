#ifndef KURS_MENU_H
#define KURS_MENU_H

#endif //KURS_MENU_H

#include <iostream>
#include <vector>

using namespace std;

string NotAvailable = "N/A";

enum ESex : int {
    Male,
    Female,
    NonBinary
};

enum EEducation : int {
    None,
    School,
    Graduate
};

enum EBank : int {
    Open,
    Sber,
    Tinkoff,
    Alpha
};

enum EProduct : int {
    Credit,
    Investment
};

enum EOpinion : int {
    Excellent,
    Well,
    OK,
    Cringe,
    VeryBad
};

class Interview {
public:
    int ID;
    ESex Sex; // +
    int Age; // +
    int Salary;
    int Kids;
    EEducation Education; // +
    EBank MainBank;
//    vector<EBank> KnownBanks; // +
    EBank BestBank;
    EBank WorstBank;
    EProduct Products;
    int Glad;
    string Reason;
    string Needed;
    int Interior;
    int Investment;
    int HowMuch;
    EOpinion Opinion;
    string Date;

    string DescribeID();

    string DescribeSex();

    string DescribeAge();

    string DescribeEducation();

    string DescribeKnownBanks();

    string DescribeReason();

    void InputSex();

    void InputAge();

    void InputEducation();

//    void InputKnownBanks();

    void InputReason();
};

Interview *InputInterview();

void PrintInterview(Interview *i);

