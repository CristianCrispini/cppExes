#include <iostream>

class Cat 
{
public:
    void speak();
    Cat(std::string name);
    ~Cat();
private:
    bool happy;
    std::string name;
    std::string color;
}; 