#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand((unsigned)time(NULL));
    int numVar = rand() % 6+5;
    cout << numVar << endl;

    if (numVar > 5) {
        cout << "Number is greater than 5" << endl;
    } else {
        cout << "Number is not greater than 5" << endl;
    }
    return 0;
}