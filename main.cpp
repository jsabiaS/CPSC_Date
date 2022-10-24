#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Date.h"

main(int argc, char const *argv[]) {

    ifstream file1;
    ofstream output;

    int numDates;
    int month;
    int day;
    int year;

    string temp;

    vector<Date> dates;

    file1.open(argv[1]) ;
    if (file1.is_open()) {
        file1 >> temp;
        numDates = stoi(temp);

    for (int i = 0; i < numDates; i++) {
        file1 >> month;
        file1 >> day;
        file1 >> year;

        Date date(month, day, year);
        dates.push_back(date);

        dates[i].setMonth(month);
        dates[i].setDay(day);
        dates[i].setYear(year);

    }     

    sort(dates.begin(), dates.end(), Date::compare);

    output.open(argv[2]);

    for (int i = 0; i < numDates; ++i) {
        output << dates[i].print() << endl;
    }
        file1.close();
        output.close();   
    }

    else {
        cout << "Your file did not open" << endl;
    }

    return 0;
}
