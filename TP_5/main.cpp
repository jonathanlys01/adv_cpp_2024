#include "tree.h" 
#include "lumberjack.h"

int main(int argc, char* argv[]) {
    Tree t;
    Lumberjack bob(3.0);

    t.info();
    bob(t);
    t.info();
}