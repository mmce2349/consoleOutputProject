//
//  Runner.cpp
//  consoleOutputProject
//
//  Created by Mcentire, Mitchell on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
using namespace std;
int main()
{
    Controller app;
    app.start();
    
    cout << "Mitch McEntire" << endl;
    for (int index = 12; index < 31; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    
}
