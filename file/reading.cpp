#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream infile;
    infile.open("My.text");
    if(!infile.is_open()){
        cout<<"File cannot be opened"<<endl;
    }

    string str;
    int x;
    while (!infile.eof()){
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x<<endl;
    }
    

    infile.close();

}