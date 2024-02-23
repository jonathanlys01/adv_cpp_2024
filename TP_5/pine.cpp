#include "pine.h"
#include <iostream>
using namespace std;

Pine::Pine(){
    cout << "Creating pine at " << this << endl; 
}

Pine::~Pine(){
    cout << "Destroying pine" << endl;
}

void Pine::draw(){
    cout << "Drawing pine with height " << this->height << endl;
}

void Pine::info(){
    cout << "The pine is planted at " << this << endl;
}



