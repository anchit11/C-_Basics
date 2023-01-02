#include <iostream>

using namespace std;

int main(){
    int a[10],n=10;
    int key;
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Element found at position "<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
    
    return 1;

}