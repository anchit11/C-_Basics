#include <iostream>
using namespace std;

int main(){
    int A[10]= {6,8,13,17,20,22,25,28,30,35};
    int key,mid,l=0,h=9;
    cout<<"Enter key: ";
    cin>>key;
    while(l<=h){
        mid = (l+h)/2;
        if(key==A[mid]){
            cout<<"Key found at "<<mid<<endl;
            return 0;
        }
        else if(key>A[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return 1;
}