#include "tree.h"
#include <iostream>

void Tree::draw(){
    std::cout << "Drawing tree" << std::endl;
}

Tree::Tree(){
    std::cout << "Tree constructor" << std::endl;
}

Tree::~Tree(){
    std::cout << "Tree destructor" << std::endl;
}

void Tree::info(){
    std::cout << "The tree is planted at " << this << std::endl;
}