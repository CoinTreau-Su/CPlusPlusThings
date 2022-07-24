/**
 * @file interesting_facts4.cpp
 * @brief 抽象类可以有构造函数
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include<iostream> 
using namespace std; 

// An abstract class with constructor 
class Base 
{ 
    protected: 
        int x; 
    public: 
        virtual void fun() = 0; 
        Base(int i) { x = i; } 
}; 

class Derived: public Base 
{ 
    int y; 
    public: 
    /*
        ●派生类不继承基类的构造函数和析构函数，但是能调用基类的构造函数和析构函数；
        ●派生类的构造函数总是先调用基类的构造函数来初始化派生类中的基类成员，再进行派生类中成员的初始化；
    */
    Derived(int i, int j):Base(i) { y = j; } 
    void fun() { cout << "x = " << x << ", y = " << y; } 
}; 

int main(void) 
{ 
    Derived d(4, 5); 
    d.fun(); 
    return 0; 
} 
