#include <iostream>

class Flat 
{
public:
    Flat() { std::cout << "Flat create\n"; }
    ~Flat() { std::cout << "Flat destroy\n"; }
};

class Build
{
    Flat flat;
public:
    Build() { std::cout << "Build create\n"; }
    ~Build() { std::cout << "Build destroy\n"; }
};

class Boss
{
public:
    Boss() { std::cout << "Boss create\n"; }
    ~Boss() { std::cout << "Boss destroy\n"; }
};

class Department
{
    Boss* boss;
public:
    Department(Boss* boss = nullptr) : boss{ boss } { std::cout << "Department create\n"; }
    ~Department() { std::cout << "Department destroy\n"; }
};

int main()
{
    //Build build;
    Boss* boss = new Boss;
    Department dep(boss);
}
