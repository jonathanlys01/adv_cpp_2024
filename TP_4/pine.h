#ifndef SAPIN
#define SAPIN

#include "tree.h"
#include "pixel.h"

class Pine : public Tree {
private:
	int width;
	int height;
	Pixel *image;
public:
	//Default constructor and destructor
	Pine();
	~Pine();

	// Assignment operator
	Pine& operator=(const Pine& s);
	
	//Pine methods
	void draw() override final;
	void info() override final;

	// Copy constructor
	Pine(const Pine& s);
};

#endif