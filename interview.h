#ifndef KURS_INTERVIEW_H
#define KURS_INTERVIEW_H

#endif //KURS_INTERVIEW_H

#include <iostream>
#include <vector>

using namespace std;

enum ESex : int {
    Men,
    Women,
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
    int Number;
    ESex Sex; // +
    int Age; // +
    int Salary;
    int Kids;
    EEducation Education; // +
    EBank Main;
    vector<EBank> KnownBanks; // +
    EBank BestBank;
    EBank WorstBank;
    EProduct Products;
    int Glad;
    string Reason;
    string Needed;
    string Time;
    int Interior;
    int Investment;
    int HowMuch;
    EOpinion Opinion;

    string DescribeNumber();

    string DescribeSex();

    string DescribeAge();

    string DescribeEducation();

    string DescribeKnownBanks();

    string DescribeReason();

    void InputSex();

    void InputAge();

    void InputEducation();

    void InputKnownBanks();

    void InputReason();
};