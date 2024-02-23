# include "tree.h"

class Lumberjack {
    protected:
        double maxHeight;
        int numberOfTrees;
    public:
        Lumberjack(double maxHeight);
        void operator()(Tree& t);
};