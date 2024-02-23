#ifndef TREE_H
#define TREE_H

class Tree {
    protected :
        double height;
        bool evergreen;
        double size;

    public :
        Tree();
        Tree(double h);
        virtual ~Tree();
        virtual void draw(); // polymorphic method
        virtual void info();
        void setHeight(int height);
        void setSize(double size);
        void setEvergreen(bool evergreen);
        double getSize();
        int getHeight();
        bool getEvergreen();
    
};
#endif