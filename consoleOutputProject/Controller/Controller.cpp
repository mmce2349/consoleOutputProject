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
    
    for (int i =1; i<= 5; i++)
        firstAttempt.push_back(i);
    
    
    cout << "OutPut of begin and end\t:\t";
    
    vector <string> stringVector;
    stringVector.push_back("monday");
    stringVector.push_back("tuesday");
   
//    for(int i = 0; i < stringVector.length(); i++)
//    {
//        cout << stringVector[i] << endl;
//    }
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    
}
