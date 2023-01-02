#include <iostream>

using namespace std;

int main(){
    int A[]= {7,57,39,86,290,753};
    int max = A[0];
    for(int x:A){
        if(x>max){
            max = x;
        }
    }
    cout<<"Maximum element is "<<max<<endl;
    return 0;
}