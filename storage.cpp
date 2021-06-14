#include "storage.h"
#include <vector>
#include <map>

IInterviewStorage::~IInterviewStorage() {

}

VectorInterviewStorage::~VectorInterviewStorage() {
    storage.clear();
    storage.shrink_to_fit();
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

void printFreqStat(string field, int freq, int count) {
    cout << "\t" << field << " " << freq << " (" << freq * 100 / count << "%)" << endl;
}

void VectorInterviewStorage::Stats() {
    cout << endl << "Statistics" << endl;

    int AgeSum = 0, count = 0;
    map<ESex, int> SexFreq = {}; // гендер: сколько раз встречался
    map<EBank, int> BankFreq = {};

    for (auto const &interview: storage) {
        count++;
        AgeSum += interview->Age;
        SexFreq[interview->Sex]++;
        BankFreq[interview->MainBank]++;
    }

    cout << "Average age: " << AgeSum / count << endl;

    cout << "Sex frequencies:" << endl;
    printFreqStat(PrintESex(Male), SexFreq[Male], count);
    printFreqStat(PrintESex(Female), SexFreq[Female], count);
    printFreqStat(PrintESex(NonBinary), SexFreq[NonBinary], count);

    cout << "Bank frequencies" << endl;
    printFreqStat(PrintEBank(Open), BankFreq[Open], count);
    printFreqStat(PrintEBank(Sber), BankFreq[Sber], count);
    printFreqStat(PrintEBank(Tinkoff), BankFreq[Tinkoff], count);
    printFreqStat(PrintEBank(Alpha), BankFreq[Alpha], count);

}

ListInterviewStorage::~ListInterviewStorage() {

}

void ListInterviewStorage::Add(Interview *i) {
    storage.PushBack(i);
}

void ListInterviewStorage::Remove(int id) {
    storage.RemoveByID(id);
}

Interview *ListInterviewStorage::SearchByID(int id) {
    auto found = find_if(storage.begin(), storage.end(), [&id](Interview *i) {
        return i->ID == id;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *ListInterviewStorage::SearchByAge(int age) {
    auto found = find_if(storage.begin(), storage.end(), [&age](Interview *i) {
        return i->Age == age;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *ListInterviewStorage::SearchByMainBank(EBank bank) {
    auto found = find_if(storage.begin(), storage.end(), [&bank](Interview *i) {
        return i->MainBank == bank;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *ListInterviewStorage::SearchByDate(string date) {
    auto found = find_if(storage.begin(), storage.end(), [&date](Interview *i) {
        return i->Date == date;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

Interview *ListInterviewStorage::SearchByOpinion(EOpinion opinion) {
    auto found = find_if(storage.begin(), storage.end(), [&opinion](Interview *i) {
        return i->Opinion == opinion;
    });

    if (found == storage.end()) {
        return nullptr;
    }

    return *found;
}

void ListInterviewStorage::Stats() {
    cout << endl << "Statistics" << endl;

    int AgeSum = 0, count = 0;
    map<ESex, int> SexFreq = {}; // гендер: сколько раз встречался
    map<EBank, int> BankFreq = {};

    for (auto const &interview: storage) {
        count++;
        AgeSum += interview->Age;
        SexFreq[interview->Sex]++;
        BankFreq[interview->MainBank]++;
    }

    cout << "Average age: " << AgeSum / count << endl;

    cout << "Sex frequencies:" << endl;
    printFreqStat(PrintESex(Male), SexFreq[Male], count);
    printFreqStat(PrintESex(Female), SexFreq[Female], count);
    printFreqStat(PrintESex(NonBinary), SexFreq[NonBinary], count);

    cout << "Bank frequencies" << endl;
    printFreqStat(PrintEBank(Open), BankFreq[Open], count);
    printFreqStat(PrintEBank(Sber), BankFreq[Sber], count);
    printFreqStat(PrintEBank(Tinkoff), BankFreq[Tinkoff], count);
    printFreqStat(PrintEBank(Alpha), BankFreq[Alpha], count);
}