#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;

    public:
        Date();
        Date(int, int, int);
        
        static const string MONTHS[12];
        
        int getMonth() const;
        int getDay() const;
        int getYear() const;
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        string print();
        static bool compare(const Date, const Date);
};

#endif