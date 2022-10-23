#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Date.h"

main(int argc, char const *argv[]) {

    ifstream file1;

    int numDates;
    int month;
    int day;
    int year;

    vector<Date> dates;

    file1.open ("dates.txt");
    if (file1.is_open()) {
        file1 >> numDates;

        while (!file1.eof()) {
            Date date(month, day, year);


            for (int i = 0; i < numDates; i++) {
                file1 >> month;
                file1 >> day;
                file1 >> year;

                dates.push_back(date);

                dates[i].setMonth(month);
                dates[i].setDay(day);
                dates[i].setYear(year);
            }

        sort(dates.begin(), dates.end(), Date::compare); 

        }

        for (int i = 0; i < numDates; ++i) {
            cout << dates[i].print() << endl;
        }

        file1.close();
        
    }

    else {
        cout << "shit" << endl;
    }

    return 0;
}