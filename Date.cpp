#include "Date.h"
#include <sstream>
#include <iomanip>

const string Date::MONTHS[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

Date::Date() {
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

string Date::print() {
    stringstream ss;
    ss << left << setw(10) << MONTHS[month - 1] << "\t";
    ss << left << setw(3) << day << "\t";
    ss << left << setw(5) << year;
    return ss.str();
}

bool Date::compare(Date d1, Date d2) {
    if (d1.year < d2.year) {
        return true;
    }
    else if (d1.year > d2.year) {
        return false;
    }
    else {
        if (d1.month < d2.month)
            return true;
        if (d1.month > d2.month)
            return false;
    }
    return d1.day < d2.day;
}