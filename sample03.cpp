#include <iostream>
using namespace std;

template <typename dtypeR, typename dtype1, typename dtype2>
dtypeR add(dtype1 num1, dtype2 num2);

int main(int argc, char *argv[]) {
    int num1, num2, result;
    cout << "Enter num1 : "; cin >> num1;
    cout << "Enter num2 : "; cin >> num2;
    result = add<double>(num1, num2);
    cout << "Result is " << result << endl;

    return 0;
}

template <typename dtypeR, typename dtype1, typename dtype2>
dtypeR add(dtype1 num1, dtype2 num2) {
    return (num1 + num2);
}