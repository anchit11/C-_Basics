#include <iostream>
using namespace std;

class rational{
    private: 
        int p;
        int q;
    public:
        rational(int p=0,int q=0);
        rational(rational &r);

        void setP(int p);
        void setQ(int q);

        int getP();
        int getQ();

        rational operator+(rational r);
        friend ostream & operator<<(ostream &o, rational &r);

};

int main(){
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<r3;
    return 0;

}

rational::rational(int p,int q){
    this->p= p;
    this->q = q;
}
rational::rational(rational &r){
    p=r.p;
    q=r.q;
}
void rational::setP(int p){
    this->p=p;
}
void rational::setQ(int q){
    this->q=q;
}
int rational::getP(){
    return p;
}
int rational::getQ(){
    return q;
}
rational rational::operator+(rational r){
    rational temp;
    temp.p = p*r.q + q*r.p;
    temp.q = q*r.q;
    return temp;
}
ostream & operator<<(ostream &o, rational &r){
    o<<r.p<<"/"<<r.q<<endl;
    return o;
}
