#include <iostream>

using namespace std;

int main(){
    // cout<<"enter a number"<<endl;
    // int n,i;
    // cin>>n;
    // for(i = 2; i<(int)(n/2+1);i++){
    //     if(n%i==0){
    //         cout<<"number is not prime"<<endl;
    //         break;
    //     }
    // }
    // if (i>n/2){
    //     cout<<"number is prime"<<endl;
    // }
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int j;

    for (int i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }

    
    return 0;
}