#ifndef KURS_MENU_H
#define KURS_MENU_H

#endif //KURS_MENU_H

#include "interview.h"
#include <vector>

// Общий интерфейс для хранилища ответов
class IInterviewStorage {
public:
    // Абстрактный деструктор, нужен для возможности вызова delete на конкретных релазиациях хранилища
    virtual ~IInterviewStorage();

    // Добавляем новый ответ в хранилище
    virtual void Add(Interview *i) = 0;

    // Удаляет ответ по id
    virtual void Remove(int id) = 0;

    // Возвращает первый найденый ответ с таким id
    virtual Interview *SearchByID(int id) = 0;

    // Возвращает первый найденый ответ с таким age
    virtual Interview *SearchByAge(int age) = 0;

    // Возвращает первый найденый ответ с таким основным банком
    virtual Interview *SearchByMainBank(EBank bank) = 0;

    // Возвращает первый найденый ответ с такой датой
    virtual Interview *SearchByDate(string date) = 0;

    // Возвращает первый найденый ответ с таким мнением
    virtual Interview *SearchByOpinion(EOpinion opinion) = 0;

    // Пока просто выводит все ответы
    // todo: Выводит статистику
    virtual void Stats() = 0;
};

// Конкретная реализация хранилища ответов на std::vector
class VectorInterviewStorage : public IInterviewStorage {
private:
    vector<Interview *> storage;

public:
    ~VectorInterviewStorage() {
        storage.clear();
        storage.shrink_to_fit();
    }

    virtual void Add(Interview *i);

    virtual void Remove(int id);

    virtual Interview *SearchByID(int id);

    virtual Interview *SearchByAge(int id);

    virtual Interview *SearchByMainBank(EBank bank);

    virtual Interview *SearchByDate(string date);

    virtual Interview *SearchByOpinion(EOpinion opinion);

    virtual void Stats();
};
