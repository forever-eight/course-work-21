#include "storage.h"
#include <vector>

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

Interview *VectorInterviewStorage::SearchByAge(int id) {
    return nullptr;
}

Interview *VectorInterviewStorage::SearchByMainBank(EBank bank) {
    return nullptr;
}

Interview *VectorInterviewStorage::SearchByDate(string date) {
    return nullptr;
}

Interview *VectorInterviewStorage::SearchByOpinion(EOpinion opinion) {
    return nullptr;
}

void VectorInterviewStorage::Stats() {
    cout << "Stats" << endl;
}
