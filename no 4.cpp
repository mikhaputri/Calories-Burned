//
//  no 4.cpp
//  Looping
//
//  Created by Mikha Yupikha on 28/09/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//
/* Running on a particular treadmill you burn 3.6 calories per minute. Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes. */

#include <iostream>
using namespace std;

int main( )
{
    double initialCalories = 3.6;
    int time = 0;
    
    
    for (time; time<=30; time+=5)
        cout<< time << "\t\t" << (initialCalories*time) <<endl;
        
    
    
    return 0;
}
