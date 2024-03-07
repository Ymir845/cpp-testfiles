#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Program will constantly add a value to a number
int main() {
    srand((unsigned)time(NULL));

    int Num = 0;
    cout << Num << endl;
    for (int Y = 0; Y < 5; Y++) {
        int add = rand() % 41+60;
        cout << add << endl;
        Num = Num+add;
        cout << Num << endl;
    }
    return 0;
}