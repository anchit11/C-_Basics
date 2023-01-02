#include <iostream>

using namespace std;

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
    int (*fp) (int,int);
    fp=sum;
    cout<<(*fp)(10,20)<<endl;
    fp=sub;
    cout<<(*fp)(10,20)<<endl;
    return 0;

}