#include <iostream>
#include <string.h>
using namespace std;
class employee{

    int id;
    int salary;
    char name[20];
public:

void setId(int i){id = i;}
void setSalary(int sal)
{salary = sal ;}
void setName(char* n)
    {
       strcpy(name, n);
    }

int getId(void)
    {
        return id;
    }
int getsalary(void)
    {
        return salary;
    }

char* getName()
    {
        return name;
    }
void fillemp(int i ,int sal ,char* n);
void printemp();
};
void employee :: fillemp(int i ,int sal ,char* n){
        id = i;
        salary = sal;
        strcpy(name,n);
    }
void employee::printemp()
    {
        cout<<"ID is "<<id<<endl;
        cout<<"Salary is "<<salary<<endl;
        cout<<"Name is  "<<name<<endl;
    }

int main()
{
    employee emp1,emp2,emp3;
    cout<<"Enter the id :";
    int id;
    cin >> id;
    emp3.setId(id);
    cout<<"Enter the salary :";
    int salary;
    cin >> salary;
    emp3.setSalary(salary);
    cout<<"Enter the Name :";
    char name[100];
    cin >> name;
    emp3.setName(name);
    emp3.printemp();
    cout<<"---------------------------------"<<endl;

    emp1.setId(1);
    emp1.setSalary(1000);
    emp1.setName("Ahmed");
    emp1.printemp();
    cout<<"---------------------------------"<<endl;
    emp2.fillemp(2,2000,"Roshdi");
    emp2.printemp();



    return 0;
}
