// Multiple Inheritance in OOPS C++
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of class A" << endl;
    }
    ~A()
    {
        cout << "Destructor of class A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Constructor of class B" << endl;
    }
    ~B()
    {
        cout << "Destructor of class B" << endl;
    }
};

class C : public B, public A
{
public:
    C()
    {
        cout << "Constructor of class C" << endl;
    }
    ~C()
    {
        cout << "Destructor of class C" << endl;
    }
};

// Diamond Problem
class Person { 
public:
    Person(int x) { cout << "Person::Person(int) called" << endl; }
};
class Father : public Person{ 
public:
    Father(int x) : Person(x) {
        cout << "Father::Father(int) called" << endl;
    }
};
class Mother : public Person { 
public:
    Mother(int x) : Person(x) {
        cout << "Mother::Mother(int) called" << endl;
    }
};
class Child : public Father, public Mother { 
public:
    Child(int x) : Mother(x), Father(x) {
        cout << "Child::Child(int) called" << endl;
    }
};

int main()
{
    // C obj;
    Child obj(10);
    // Now you can see the ambiguity here. The Person class constructor is called twice: once when the Father class object is created and next when the Mother class object is created. The properties of the Person class are inherited twice, giving rise to ambiguity.
    // The Diamond Problem is fixed using virtual inheritance, in which the virtual keyword is used when parent classes inherit from a shared grandparent class. By doing so, only one copy of the grandparent class is made, and the object construction of the grandparent class is done by the child class.
    return 0;
}