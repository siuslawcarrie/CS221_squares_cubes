/*Carrie Bailey
 * Spring 2024
 * I/O Exercises
 * Program #4: prints numbers 1 -10 in column 1, squared in column 2, cubed in column 3*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num;
    //column headers
    cout << "number" << "\tsquare" << "\tcube" << endl;
    //calculate squares and cubes and put into columns
    for (num = 0; num <= 10; num++) {
        cout << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << endl;
    }
    return 0;
}