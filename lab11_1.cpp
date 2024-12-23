#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i = 0; i < 3; ++i) {
        cin.ignore();
    }

    srand(time(0));

    vector<string> grades = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    string predictedGrade = grades[rand() % 9];

    cout << "\nYou will get " << predictedGrade << " in this 261102." << endl;

    return 0;
}
