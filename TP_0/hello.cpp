#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cout << &name << endl; // reference to the memory address of the variable
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
