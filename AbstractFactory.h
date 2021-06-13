#pragma once

#include "Front_list.h"
#include "interview.h"


class InterviewFactory  {
public:
    Interview* create()  {
         Interview* interview1 = new Interview();
//        AbsInterview* interview1;
        interview1->number = rand() % 500000;
        interview1->gender = static_cast<gen>(rand() % 2);
        interview1->age = rand() % 60 + 20;
        interview1->salary = rand() % 300000;
        interview1->kids = rand() % 8;
        interview1->education = static_cast<educ>(rand() % 3);
        interview1->banks = static_cast<bank>(rand() % 3);
        interview1->known = static_cast<bank>(rand() % 3);
        interview1->TV = static_cast<bank>(rand() % 3);
        interview1->internet = static_cast<bank>(rand() % 3);
        interview1->products = static_cast<product>(rand() % 2);
        interview1->glad = rand() % 10;
        interview1->why = gen_random();
        interview1->needed = gen_random();
        interview1->time = gen_random();
        interview1->interior = random();
        interview1->investment = random();
        interview1->how_much = random();
        interview1->opinion = static_cast<opin>(rand() % 3);
        return interview1;
    }

private:
    static std::string gen_random(int len = 10) {
        static const char alphanum[] =
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        std::string str;
        for (int i = 0; i < len; i++) {
            str += alphanum[rand() % (sizeof(alphanum) - 1)];
        }
        str[0] = toupper(str[0]);
        return str;
    }

};