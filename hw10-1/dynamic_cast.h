#ifndef __dynamic_cast__
#define __dynamic_cast__
#include <iostream>
using namespace std;

class B{
public:
    virtual ~B() {}
};

class C : public B{
public:
    void test_C() { std::cout << "C::test_C()" << std::endl; }
};

class D : public B{
public:
    void test_D() { std::cout << "D::test_D()" << std::endl; }
};

#endif
