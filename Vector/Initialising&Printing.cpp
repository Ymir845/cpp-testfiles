#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main(){

    cout << "build test" << endl;

    // Vector initialised with values 1, 2, 3, 4, 5
    vector<int> testVect = {1, 2, 3, 4, 5};

    cout << "1st Vector Initialised" << endl;

    // Vector with 5 (size) of 12 values
    vector<int> testVect2(5, 12);

    cout << "2nd Vector Initialised" << endl;
    
    sleep(2);

    cout << "list vectors" << "endl";

    cout << testVect;
    cout << testVect2;

    return 0;
}

// FOR 'COUT ERROR' : https://stackoverflow.com/questions/10750057/how-do-i-print-out-the-contents-of-a-vector
// Ranged Loop
