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
    i->Education = static_cast<EEducation>(arc4random() % 3);
    i->MainBank = Sber;
    i->Reason = "Я бизнесмен все таки";
    i->Opinion = static_cast<EOpinion>(arc4random() % 3);
    i->Date = randDate();
    // todo: и остлаьные поля

    return i;
}

Interview *HousewifeFactory::CreateInterview(int id) {
    Interview *i = new Interview;

    i->ID = id;
    i->Age = arc4random_uniform(5 * 2) + 40; // 45 ± 5 лет
    i->Sex = Female;
    i->Education = None;
    i->MainBank = static_cast<EBank>(arc4random_uniform(4));
    i->Reason = "Я в этом не разбираюсь, я домохозяйка";
    i->Opinion = static_cast<EOpinion>(arc4random() % 5);
    i->Date = randDate();


    // todo: и остлаьные поля

    return i;
}
