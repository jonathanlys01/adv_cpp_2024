#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Hello, World!" << endl;
    cout << "argc: " << argc << endl;
    for (int i=0; i<argc; i++){
        cout << "Arg " << i << ": " << argv[i] << endl;
    }
    return 0;
}
