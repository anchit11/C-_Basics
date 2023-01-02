#include <iostream>

using namespace std;

class student{

    private:
        int rollno;
        string name;
        int m1,m2,m3;

    public:
    //Constructors
        student(int rollno,string name, int m1,int m2,int m3);
        student(student &s);
    //Mutators
        void setMarks(int a,int b,int c);
    //Accessors
        void getMarks();
    //Facilitators
        int total();
        void grade(int marks);
    //Enquiry
        bool isMarks();
    //Destructor;
        ~student();
};

int main(){
    student s1(1,"Anchit",59,83,5);
    if(s1.isMarks()){
        int total = s1.total();
        cout<<"Total Marks: "<<total<<endl<< "Grade is ";
        s1.grade(total);
        cout<<endl;
    }
    else{
        cout<<"Invalid Input of marks"<<endl;
    }
    return 0;
}


//Functions defined in class 'student'
student::student(int rollno,string name, int m1,int m2,int m3)
{     
        this->rollno = rollno;
        this->name = name;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
        }
student::student(student &s){
            rollno=s.rollno;
            name = s.name;
            m1=s.m1;
            m2=s.m2;
            m3=s.m3;
        }
void student::setMarks(int a=0, int b=0, int c=0){
    m1=a;
    m2=b;
    m3=c;
}
void student::getMarks(){
    cout<<m1<<endl<<m2<<endl<<m3<<endl;
}
int student::total(){
    int total;
    total = m1+m2+m3;
    return total;
} 
void student::grade(int total){
    int percentage = total/3;
    if(percentage <40){
        cout<<"C"<<endl;
    }else if(percentage>=40 && percentage <60){
        cout<<"B"<<endl;
    }else{
        cout<<"A"<<endl;
    }
}
bool student::isMarks(){
if(m1>0 && m2>0 && m3>0){
    return true;
}
return false;
}
student::~student(){
    cout<<"Student Deleted"<<endl;
}

