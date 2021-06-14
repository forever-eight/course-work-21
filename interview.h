#ifndef KURS_INTERVIEW_H
#define KURS_INTERVIEW_H

#include <iostream>
#include <vector>


using namespace std;

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

string PrintEEducation(EEducation e);
string PrintESex(ESex s);
string PrintEBank(EBank b);
string PrintEProduct(EProduct p);
string PrintEOpinion(EOpinion o);

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

    void InputSex();

    void InputAge();

    void InputEducation();

//    void InputKnownBanks();

    void InputReason();
};

Interview *InputInterview();

void PrintInterview(Interview *i);

string DescribeID();

string DescribeSex();

string DescribeAge();

string DescribeEducation();

string DescribeMainBank();

//    string DescribeKnownBanks();

string DescribeReason();

string DescribeDate();

string DescribeOpinion();

#endif //KURS_INTERVIEW_H
