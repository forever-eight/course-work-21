#include "interview.h"

#ifndef KURS_FACTORY_H
#define KURS_FACTORY_H

class AbstractFactory {
public:
    virtual Interview *CreateInterview(int id) = 0;
};

class BusinessmanFactory : public AbstractFactory {
public:
    virtual Interview *CreateInterview(int id);
};

class HousewifeFactory : public AbstractFactory {
public:
    virtual Interview *CreateInterview(int id);
};

#endif //KURS_FACTORY_H