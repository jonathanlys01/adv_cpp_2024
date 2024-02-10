#include "tree.h"
#include <iostream>
using namespace std;

Tree::Tree(){
    this->height = 10.0;
    this->evergreen = false;
    cout << "Creating default tree at " << this << endl;

}

Tree::Tree(double h){
    this->height = h;
    cout << "Creating tree of height " << h << endl;
}


Tree::~Tree(){
    std::cout << "Destroying tree" << std::endl;
}


void Tree::draw(){
    std::cout << "Drawing tree" << std::endl;
}
void Tree::setHeight(int h){
    this->height = h;
}

void Tree::setEvergreen(bool e){
    this->evergreen = e;
}

int Tree::getHeight(){
    return this->height;
}

bool Tree::getEvergreen(){
    return this->evergreen;
}

void Tree::info(){
    // return Memory address of the object
    std::cout << "The tree is planted at " << this << std::endl;
}


