//
//  Controller.cpp
//  consoleOutputProject
//
//  Created by Mcentire, Mitchell on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
using namespace std;
Controller :: Controller()
{
    vector <int> firstAttempt;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;
    firstAttempt.push_back(5);
    for (int i =1; i<= 5; i++)
        firstAttempt.push_back(i);
    
    
    cout << "OutPut of begin and end\t:\t" ;
    for (auto i = firstAttempt.begin(); i != firstAttempt.end(); ++i)
        std::cout << *i << ' ';
    
    vector <string> stringVector;
    stringVector.push_back("monday");
    stringVector.push_back("tuesday");
   stringVector.push_back("wednesday");
    stringVector.push_back("thursday");
    stringVector.push_back("friday");
    stringVector.push_back("saturday");
    stringVector.push_back("sunday");
    for (auto i = stringVector.begin(); i != stringVector.end(); ++i)
        std::cout << *i << ' ';
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    
}
