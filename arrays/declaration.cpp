#include <iostream>

using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int B[]={6,7,8,9,10};
    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}