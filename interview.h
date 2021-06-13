#pragma once

using namespace std;

enum educ : int {
    NoEducation,
    School,
    University
};
enum gen : int {
    Men,
    Women
};

enum bank : int {
    Open,
    Sberbank,
    Tinkoff
};
enum product : int {
    credit,
    investment
};

enum opin : int {
    ok,
    good,
    bad
};

class Interview {
public:
    int number;
    gen gender;
    int age;
    int salary;
    int kids;
    educ education;
    bank banks;
    bank known;
    bank TV;
    bank internet;
    product products;
    int glad;
    string why;
    string needed;
    string time;
    int interior;
    int investment;
    int how_much;
    opin opinion;

public:
    int getnumber() { return number; }

    gen getgender() { return gender; }

    int getage() { return age; }

    int getsalary() { return salary; }

    int getkids() { return kids; }

    educ geteducation() { return education; }

    bank getbanks() { return banks; }

    bank getknown() { return known; }

    bank getTV() { return TV; }

    bank getinternet() { return internet; }

    product getproducts() { return products; }

    int getglad() { return glad; }

    string getwhy() { return why; }

    string getneeded() { return needed; }

    string gettime() { return time; }

    int getinterior() { return interior; }

    int getinvestment() { return investment; }

    int gethow_much() { return how_much; }

    opin getopinion() { return opinion; }
};






