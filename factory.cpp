#include "factory.h"

string randDate() {
    char dateBuff[100];
    snprintf(dateBuff, sizeof(dateBuff), "%02d.06.2021", arc4random() % 30);
    return dateBuff;
}

Interview *BusinessmanFactory::CreateInterview(int id) {
    Interview *i = new Interview;

    i->ID = id;
    i->Age = arc4random_uniform(10 * 2) + 50; // нормальное распределение, 60 ± 10 лет
    i->Sex = Male;
    i->Salary = arc4random_uniform(50 * 2) + 200;
    i->Education = static_cast<EEducation>(arc4random() % 3);
    i->MainBank = Sber;
    i->BestBank = static_cast<EBank>(arc4random() % 4);
    i->WorstBank = static_cast<EBank>(arc4random() % 4);
    i->Products = static_cast<EProduct>(arc4random() % 2);
    i->Glad = arc4random() % 10;
    i->HowMuch = arc4random_uniform(110 * 2) % 100000;
    i->Opinion = static_cast<EOpinion>(arc4random() % 5);
    i->Needed = "Всего и побольше";
    i->Reason = "Я бизнесмен все таки";
    i->Opinion = static_cast<EOpinion>(arc4random() % 3);
    i->Date = randDate();


    return i;
}

Interview *HousewifeFactory::CreateInterview(int id) {
    Interview *i = new Interview;

    i->ID = id;
    i->Age = arc4random_uniform(5 * 2) + 40; // 45 ± 5 лет
    i->Sex = Female;
    i->Salary = arc4random_uniform(5 * 2) + 10;
    i->Education = None;
    i->MainBank = static_cast<EBank>(arc4random_uniform(4));
    i->BestBank = static_cast<EBank>(arc4random() % 4);
    i->WorstBank = static_cast<EBank>(arc4random() % 4);
    i->Products = static_cast<EProduct>(arc4random() % 2);
    i->Glad = arc4random() % 10;
    i->HowMuch = arc4random_uniform(2 * 2) % 100;
    i->Opinion = static_cast<EOpinion>(arc4random() % 5);
    i->Needed = "Все устраивает";
    i->Reason = "Я в этом не разбираюсь, я домохозяйка";
    i->Opinion = static_cast<EOpinion>(arc4random() % 5);
    i->Date = randDate();


    return i;
}
