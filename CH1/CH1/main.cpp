//
//  main.cpp
//  CH1
//
//  Created by Da Li on 3/25/17.
//  Copyright © 2017 um. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1;
    Sales_item item2;
    
    if (cin >> item1) {
        while (cin >> item2) {
            if (compareIsbn(item1, item2)) {
                item1 += item2;
            }
        }
    }
    cout << item1 << endl;
    

    return 0;
}
