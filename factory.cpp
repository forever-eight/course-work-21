#include "factory.h"

Interview *BusinessFactory::CreateInterview() {
    Interview *i = new Interview;

    i->ID = arc4random() % 50000 + 50000;  // 50'000 <= x < 100000
    i->Age = arc4random_uniform(45); // нормальное распределение, мат. ожидание 45 лет
    i->Education = static_cast<EEducation>(arc4random() % 3);
    // todo: и остлаьные поля

    return i;
}

Interview *HousewifeFactory::CreateInterview() {
    Interview *i = new Interview;

    i->ID = arc4random() % 50000; // < 50'000
    i->Age = arc4random_uniform(32);
    i->Education = static_cast<EEducation>(arc4random() % 3);
    // todo: и остлаьные поля

    return i;
}
