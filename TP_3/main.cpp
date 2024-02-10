#include "tree.h"
#include "pine.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout << "Creating a pine on the stack" << endl;
    Pine p;
    p.info();
    p.draw();
    cout << "Creating a pine on the heap" << endl;
    Pine* p2 = new Pine();
    p2->info();
    p2->draw();
    delete p2;
    return 0;
    
}