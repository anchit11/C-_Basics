#include <iostream>
using namespace std;

int search(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int A[]={1,45,75,86,98,58,63,97,52,86},key;

    cout<<"Enter key";
    cin>>key;

    int result = search(A,10,key);

    cout<<"Element found at index "<<result<<endl;
    return 0;

}