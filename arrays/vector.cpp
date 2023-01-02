#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v ={10,20,30,50};

    v.push_back(25);//to add at the end
    v.push_back(85);
    v.pop_back();//to delete from end

    for (auto x:v){
        cout<<x<<"  ";
    }

    vector<int>::iterator itr= v.begin();//using iterator to print array
    for(;itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
}
//map-> same as dictionary in python