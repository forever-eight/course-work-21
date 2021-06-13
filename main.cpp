#include <iostream>
#include "interview.h"
#include "out.h"
#include "Front_list.h"
#include "AbstractFactory.h"
#include "decorator.h"
template<typename T>
using Container = front_list<T>;
using namespace std;


int main() {
    int answer;
    CountOfInterview();
    std::cin >> answer;
    Container<Interview *> interviews;
    InterviewFactory Factory;
    for (int i = 0; i < answer; ++i) {
        interviews.push_back(Factory.create());
    }




    Menu();
    std::cin >> answer;
    switch(answer){
        //нахождение интервью
        case 1:
            Finding();
            //if
        //добавить интеревью
        case 2:
        //дрбавляем форму
            /*std::shared_ptr<Form> createForm()
            {
                Form* form = new Form;
                std::cin >> *form;
                return std::shared_ptr<Form>(form);
            }
             form = createForm();
            collection->add(form);
             */
         std::cout << "ok i ll write it";
         //статистика
        case 3:
        //с помощью декоратора подвести статистику
            std::cout << "statistics";
    }

    return 0;
}
