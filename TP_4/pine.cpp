#include "pine.h"
#include "utils.h"
#include <cstring>
#include <iostream>

Pine::Pine() {
    std::cout << "Planting a Pine - at address : " << this << std::endl;
    width = 8;
    height = 4;
    image = new Pixel[width * height]; // new => creates a new array of Pixel (composition, not aggregation)
    unsigned int texture[] = {8, 28, 62, 8};
    int green = alea(20, 255);
    std::cout << "Green : " << green << std::endl;
    Pixel color = Pixel(0, green, 0);
    buildImage(image, width, height, texture, color); // modifies the image referenced by image
}

Pine::~Pine() {
    std::cout << "Cutting down a pine - at address : " << this << std::endl;

    std::cout << "Deleting the image of the pine - at address : " << image << std::endl;
    delete[] image; // delete the array of Pixel ([] is important)
}

Pine::Pine(const Pine &s) {
    std::cout << "Copying a Pine - at address : " << this << std::endl;
    width = s.width;
    height = s.height;
    // deep copy of the image
	image = new Pixel[width * height];
	memcpy(image, s.image, width * height * sizeof(Pixel)); // sizeof(Pixel) gives the number of channels (R,G,B, maybe A)

}

// Assignment operator

Pine& Pine::operator=(const Pine& s) {
	std::cout << "Assigning a Pine - at address : " << this << std::endl;
	if (this != &s) { //prevent self-assignment
		width = s.width;
		height = s.height;
		// deep copy of the image
		image = new Pixel[width * height];
		memcpy(image, s.image, width * height * sizeof(Pixel));
	}
	return *this;
}

void Pine::draw() {
    for (int i = 0; i < width * height; i++) {
        std::cout << image[i];
        if (i % width == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << "\033[0m" << std::endl;
}

void Pine::info() {
    std::cout << "Pine address : " << this << std::endl;
    std::cout << "Pine's image address : " << image << std::endl;
}
