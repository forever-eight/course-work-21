#pragma once
#include<map>

template<typename T>
using Container = front_list<T>;

class IDecor {
public:
    virtual void printNameStat() const = 0;

    virtual void printNameStat_Absolute() const = 0;
};

class MyDecorator : IDecor {
protected:
    Container<Interview *> *forms;
public:

    MyDecorator(Container<Interview *> *forms) : forms(forms) {}

    MyDecorator(const MyDecorator &right) { forms = right.forms; }

    void printNameStat() const override {
        std::map<std::string, int> data;
        std::map<gender, int> genders;
        std::map<marriageAnswer, int> mariage;
        std::map<yesNo, int> RussianLanguageInEverydayLife;

        for (auto i : *forms) {
            data[i->get_name()]++;
            genders[i->get_QA().selectedGender]++;
            RussianLanguageInEverydayLife[i->get_QA().useOfRussianLanguageInEverydayLife]++;
            mariage[i->get_QA().marriageInfo]++;
        }
        for (auto &i : data)
            std::cout << name << i.first << " " << i.second << people << std::endl;

        std::cout << maleg << genders[static_cast<gender>(0)] << people << std::endl;
        std::cout << femaleg << genders[static_cast<gender>(1)] << people << std::endl;

        std::cout << inmar << mariage[static_cast<marriageAnswer>(0)] << people << std::endl;
        std::cout << coliving << mariage[static_cast<marriageAnswer>(1)] << people << std::endl;
        std::cout << divor << mariage[static_cast<marriageAnswer>(2)] << people << std::endl;
        std::cout << breaked << mariage[static_cast<marriageAnswer>(3)] << people << std::endl;
        std::cout << wid << mariage[static_cast<marriageAnswer>(4)] << people << std::endl;
        std::cout << nevmarried << mariage[static_cast<marriageAnswer>(5)] << people << std::endl;

        std::cout << russian << RussianLanguageInEverydayLife[static_cast<yesNo>(0)]
                  << people << std::endl;
        std::cout << notrussian
                  << RussianLanguageInEverydayLife[static_cast<yesNo>(1)] << people << std::endl;
    }
