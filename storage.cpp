#include "storage.h"
#include <vector>

IInterviewStorage::~IInterviewStorage() {

}

void VectorInterviewStorage::Add(Interview *i) {
    storage.push_back(i);
}

void VectorInterviewStorage::Remove(int id) {
    auto newEnd = remove_if(storage.begin(), storage.end(), [&id](Interview *i) {
        return i->ID == id;
    });

    storage.erase(newEnd, storage.end());
}

Interview *VectorInterviewStorage::SearchByID(int id) {
    auto found = find_if(storage.begin(), storage.end(), [&id](Interview *i) {
        return i->ID == id;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *VectorInterviewStorage::SearchByAge(int age) {
    auto found = find_if(storage.begin(), storage.end(), [&age](Interview *i) {
        return i->Age == age;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *VectorInterviewStorage::SearchByMainBank(EBank bank) {
    auto found = find_if(storage.begin(), storage.end(), [&bank](Interview *i) {
        return i->MainBank == bank;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *VectorInterviewStorage::SearchByDate(string date) {
    auto found = find_if(storage.begin(), storage.end(), [&date](Interview *i) {
        return i->Date == date;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *VectorInterviewStorage::SearchByOpinion(EOpinion opinion) {
    auto found = find_if(storage.begin(), storage.end(), [&opinion](Interview *i) {
        return i->Opinion == opinion;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

void VectorInterviewStorage::Stats() {
    cout << "Stats" << endl;
    for (auto const& value: storage) {
        PrintInterview(value);
    }
}
