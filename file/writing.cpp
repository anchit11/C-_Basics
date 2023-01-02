#include <fstream>//file header
#include <iostream>
using namespace std;
int main(){
    ofstream outfile("My.text",ios::app); // to create file handle
    outfile<<"Hello"<<endl;
    outfile<<25<<endl;
    outfile.close();
    cout<<"Done";
}