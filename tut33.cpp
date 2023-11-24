#include <iostream>

class SelfReferential {
public:
    SelfReferential* selfPointer;

    SelfReferential() : selfPointer(nullptr) {}
};

int main() {
    SelfReferential obj1, obj2;

    // Assigning the self-pointer of obj1 to obj2
    obj1.selfPointer = &obj2;

    // Displaying the self-pointer of obj1
    std::cout << "Self Pointer of obj1: " << obj1.selfPointer << std::endl;

    return 0;
}
