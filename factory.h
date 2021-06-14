#include "interview.h"

#ifndef KURS_FACTORY_H
#define KURS_FACTORY_H

class IFactory {
    virtual Interview *CreateInterview() = 0;
};

class BusinessFactory {
    virtual Interview *CreateInterview();
};

class HousewifeFactory {
    virtual Interview *CreateInterview();
};

#endif //KURS_FACTORY_H