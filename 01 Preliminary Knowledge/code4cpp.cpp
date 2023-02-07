#include <iostream>

class Apple {
public:
    int number;
    Apple operator+(Apple another);
    void printNumber();
};

Apple Apple::operator+(Apple another) {
        Apple *apple = new Apple;
        apple->number = another.number + this->number;
        return *apple;
}

void Apple::printNumber()
{
    std::cout << "There are " << this->number 
    << " apples" << std::endl;
}

int main()
{
    Apple apple1, apple2;
    std::cin >> apple1.number;
    std::cin >> apple2.number;
    Apple apple = apple1 + apple2;
    apple.printNumber();
}