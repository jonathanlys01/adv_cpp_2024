#include "tree.h"
#include <iostream>
#include <random>
using namespace std;

Tree::Tree(){
    this->height = 10.0;
    this->evergreen = false;
    // random size between 1 and 100 (double)
    this->size = double((rand() % 100)) + .2345;
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

void Tree::setSize(double s){
    this->size = s;
}

double Tree::getSize(){
    return this->size;
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
    std::cout << size << std::endl;
}


