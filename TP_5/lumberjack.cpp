#include "lumberjack.h"
# include <iostream>

Lumberjack::Lumberjack(double maxHeight){
    this->maxHeight = maxHeight;
    this->numberOfTrees = 0;
}

void Lumberjack::operator()(Tree& t){
    // cut the tree if it is taller than the max height
    
    if (t.getSize() > this->maxHeight){
        std::cout << "Cutting tree" << std::endl;
        t.setSize(this->maxHeight);
    }
    
    this->numberOfTrees++;
}