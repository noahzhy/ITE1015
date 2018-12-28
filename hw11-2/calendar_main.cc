#include "calendar.h"
#include <iostream>

using namespace std;

int main() {
    Date date;
    while (1) {
        string command;
        cin >> command;

        if (command == "set") {
            try {
                cin >> date;
                cout << date << endl;
            } catch(InvalidDateException& exception) {
                cout << "Invalid date: " << exception.input_date << endl;
            }
        }
        else if (command == "next_day") {
            date.NextDay();
            cout << date << endl;
        }
        else if (command == "next") {
            int offset;
            cin >> offset;

            date.NextDay(offset);
            cout << date << endl;
        }
        else if (command == "quit") {
            break;
        }
    }

    return 0;
}
