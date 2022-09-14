#include <iostream>

using namespace std;

class Volume {
    public:
        float volume(float l, float b, float h) {
            return (l * b * h);
        }
};


class Area {
    public:
        float area(float l, float b, float h) {
            return (2 * (l * b + l * h + b * h));
        }
};


class Cuboid: private Volume, private Area {
    private: float length,
    breadth,
    height;


    public: Cuboid(): length(0.0),
    breadth(0.0),
    height(0.0) {}

    void getDimensions() {
        cout << "\nEnter the length of the Cuboid: ";
        cin >> length;

        cout << "\nEnter the breadth of the Cuboid: ";
        cin >> breadth;

        cout << "\nEnter the height of the Cuboid: ";
        cin >> height;
    }

   
    float volume() {
       
        return Volume::volume(length, breadth, height);
    }

   
    float area() {
        
        return Area::area(length, breadth, height);
    }
};


int main() {

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Multiple Level Inheritence in CPP  ===== \n\n";

    
    Cuboid cuboid;

    cout << "\nCalling the getDimensions() method from the main() method:\n\n";

    cuboid.getDimensions();
    cout << "\n\n";

    cout << "\nArea of the Cuboid computed using Area Class is : " << cuboid.area() << "\n\n\n";
    cout << "Volume of the Cuboid computed using Volume Class is: " << cuboid.volume();

    cout << "\n\n\n";

    return 0;
}
