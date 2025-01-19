#include <iostream>
#include <string.h>

using namespace std;

class Person
{
protected:
    int id;
    char *name;

public:
    Person()
    {
        id = 1;
        name = new char[10];
        strcpy(name, "Unknown");
    }
    Person(int i, char *namee)
    {
        id = i;
        name = new char[10];
        strcpy(name, namee);
    }
    ~Person()
    {
        delete[] name;
    }
    Person(const Person &p)
    {
        id = p.id;
        name = new char[10];
        strcpy(name, p.name);
    }
    int getID()
    {
        return id;
    }
    char *getName()
    {
        return name;
    }
    void setID(int m)
    {
        id = m;
    }
    void setName(char *namee)
    {
        strcpy(name, namee);
    }
    void printData()
    {
        cout << "Name is: " << name << " with ID: " << id << endl;
    }
};

class Employee : public Person
{
    float salary;

public:
    Employee(int i, char *namee, float sal) : Person(i, namee)
    {
        salary = sal;
    }
    ~Employee()
    {
        delete[] name;
    }
    float getSalary()
    {
        return salary;
    }
    void setSalary(float s)
    {
        salary = s;
    }
    void printData()
    {
        cout << "Name is: " << name << " with ID: " << id << " and salary is: " << salary << endl;
    }
};

class Customer : public Person
{
    float accountBalance;

public:
    Customer(int i, char *namee, float sal) : Person(i, namee)
    {
        accountBalance = sal;
    }
    ~Customer()
    {
        delete[] name;
    }
    float getAccountBalance()
    {
        return accountBalance;
    }
    void setAccountBalance(float s)
    {
        accountBalance = s;
    }
    void printData()
    {
        cout << "Name is: " << name << " with ID: " << id << " and balance is: " << accountBalance << endl;
    }
};
class Base
{
protected:
    int z;

public:
    Base()
    {
        z = 0;
    }
    Base(int m)
    {
        z = m;
    }
    void setZ(int m)
    {
        z = m;
    }
    int getZ()
    {
        return z;
    }
};

class Base1 : virtual public Base
{
protected:
    int x;

public:
    Base1(int n) : Base(n)
    {
        x = n;
    }
    int getX()
    {
        return x;
    }
};

class Base2 : virtual public Base
{
protected:
    int y;

public:
    Base2(int n) : Base(n)
    {
        y = n;
    }
    int getY()
    {
        return y;
    }
};

class Child : public Base1, public Base2
{
public:
    Child(int m, int n) : Base1(m), Base2(n)
    {
    }
};

int main()
{
    // freopen("C:\\ITI\\C & DS\\OOP\\lab7\\output.txt", "w", stdout);

    Employee emp(1, "Ahmed", 5000.0);

    emp.printData();

    Customer cust(1, "roshdi", 5000.0);
    cust.printData();

    Child ch(3, 4);
    cout << ch.getZ();
}