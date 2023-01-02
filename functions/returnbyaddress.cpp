#include<iostream>
using namespace std;

int * fun(int size){
    int *p = new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){
    int *q= fun(5);
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    delete []q;
    return 0;

}