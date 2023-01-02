#include <iostream>

using namespace std;

class employee{
    private:
        int eid;
        string name;
    public:
        employee(int e, string n)
        {
            eid = e;
            name = n;
        }
        int getEid(){return eid;}
        string getName(){return name;}
};

class FullTimeEmployee:public employee{
    private:
        int salary;
    public:
        FullTimeEmployee(int e, string n, int s):employee(e,n){
            salary = s;
        }
        int getSalary(){return salary;}
};

class PartTimeWorker:public employee{
    private:
        int wage;
    public:
        PartTimeWorker(int e, string n, int w):employee(e,n){
            wage = w;
        }
        int getWage(){return wage;}
};

int main(){
    PartTimeWorker P(3,"Arnav",526);
    FullTimeEmployee Q(1,"Anchit",5000);
    cout<<"Salary of "<<Q.getName()<<" is "<<Q.getSalary();
    cout<<"Wage of "<<P.getName()<<" is "<<P.getWage();
    return 0;
}