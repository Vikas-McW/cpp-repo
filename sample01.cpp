#include <iostream>

using namespace std;

void printMessage(void);

int main(int argc, char *argv[]) {
    cout << "My Name is Vikas Prajapati " << endl 
         << "I work in MulticoreWare as a Junior Engineer." << endl;

    cout << "Program End..." << endl;

    printMessage();
    
    return 0;
}

void printMessage(void) {
    cout << "Welcome to the world of C++" << endl
         << "Programmer can use this code for the testing purpose." << endl
         << "Do not use this cpp file the project purpose. " << endl;
}