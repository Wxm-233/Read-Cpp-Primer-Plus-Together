#include <iostream>
#include "myheader.hpp"

namespace LiHua {
    void run();
}

namespace HanMeiMei {
    void run();
}

void LiHua::run() {

}

void HanMeiMei::run() {

}

int* aFunction() {
    int *a = new int;
    *a = 5;
    std::cout << "HaHa, You used me!\n";
    return a;
}

int main()
{
    int* (*(uglytype[5])) ();
    typedef int* (*(StrangeType[5])) ();
    StrangeType anArray;

    typedef int* pt2int;
    pt2int aPointer;

    using st = int*(*([4]))();
    using inta = int;
    
    st a;
    a[2] = &aFunction;
    inta c;

    int *b = a[2]();
    std::cout << *b << std::endl;std::cout<<"HAHAHA";

    delete b;

    LiHua::run();

    int* (*aaa)();
    using namespace std;
    std::cout << "Come up and C++ me some time.";
    std::cout << std::endl;
    std::cout << "You won't regret it!" << std::endl;
    std::cout << "Press any key to continue." << std::endl;
    std::cin.get();

    std::cout << "Hello World!\n";

    return 0;
}


int function(int a)
{
    return 1;
}

void Print(char* str)
{
    printf("%s",str);
    return;
}

namespace std {

}

using std::cin;
using std::cout;
using std::endl;