#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    long num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The Square of number is " << num * num <<" ." << endl;

    if(num < 0)
        num *= -1;
    cout << "Absolute Value of the number is " << num << " ." << endl;

    return 0;
}