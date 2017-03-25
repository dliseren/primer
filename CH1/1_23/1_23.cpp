#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1, item2;
    int counter;
    if (cin >> item1) {
        counter = 1;
        while (cin >> item2) {
            if (item1.isbn() == item2.isbn()) {
                counter++;
            } else {
                cout << item1.isbn() << " : " << counter << endl;
                counter = 1;
                item1 = item2;
            }
        }
        cout << item1.isbn() << " : " << counter << endl;
    }

    return 0;
}
