#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) :
        day(d), month(m), year(y) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    bool ValidDate() const {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        }

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    return false;
                }
            } else {
                if (day > 28) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

   cout << "Enter year: ";
   cin >> year;

    Date date(day, month, year);

    if (date.ValidDate()) {
        cout << "Valid date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() <<endl;
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
