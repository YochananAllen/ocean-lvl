/*
*Title:Ocean leavls ocean’s level is currently rising at about 1.5 millimeters per year
* programmer: Yochanan Allen
* Date: 09/24
* ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

  current level that the ocean’s level will be in 5 years.

  current level that the ocean’s level will be in 7 years.

  current level that the ocean’s level will be in 10 years.
*/

#include <iostream>
using namespace std;


int main()
{
    int in5year = 5;
    int in7year = 7;
    int in10year = 10;
    double riseperyear = 1.5;

    double risein5year = in5year * riseperyear;
    double risein7year = in7year * riseperyear;
    double risein10year = in10year * riseperyear;

    cout << "the rise of ocean lvl in " << in5year << "years is " << risein5year << "mm" << endl;
    cout << "the rise of ocean lvl in " << in7year << "year is " << risein7year << "mm" << endl;
    cout << "the rise of coean lvl in " << in10year << "year is " << risein10year << "mm" << endl;

}