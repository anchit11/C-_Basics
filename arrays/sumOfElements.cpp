#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int A[]={1,2,3,4,5,6,7,8,9};

    for(auto x:A){
        sum+=x;
    }
    cout<<"Sum of values is "<<sum<<endl;
    return 0;
}