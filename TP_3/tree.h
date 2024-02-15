#ifndef TREE_H
#define TREE_H

class Tree {
    protected :
        double height;
        bool evergreen;

    public :
        Tree();
        Tree(double h);
        virtual ~Tree();
        virtual void draw(); // polymorphic method
        virtual void info();
        void setHeight(int height);
        void setEvergreen(bool evergreen);
        int getHeight();
        bool getEvergreen();
    
};
#endif