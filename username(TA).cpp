// This is for a text adventure of some sort, some unnecessary stuff in here but that's okay

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h> 

using namespace std;
// Global Variable defined outside of main loop
string success = "FALSE";
string pName = "NULL";

int main() {
  int status = 1;

  if (status == 1) {
    cout << "starting" << endl;
    sleep(2);
  }

  // Status Test
  if (status == 1) {
    cout << "test run" << endl;
    string testText;
    cin >> testText;
    cout << endl;
    if (testText == "test"){
      cout << "success" << endl;
      success = "TRUE";

      if (success == "TRUE") {
        cout << endl << "Welcome to [PLACEHOLDER]" << endl;
        sleep(2);
        cout << "Enter your Username" << endl;
        cin >> pName; // Calls Global Variable
        sleep (1);
        cout << "Are you sure your username is " << pName << "?" << endl;
        string confirmation;
        cin >> confirmation;
        if (confirmation == "yes"){
          sleep(1);
          cout << "Great! Welcome " << pName << "!" << endl;
        } else {
          cout << "I haven't coded this yet" << endl;
        }
      }
    } else {
      cout << "error" << endl;
    }
  }

  return 0;
  
}
