#include <iostream> 
#include <fstream>
#include <vector>
using namespace std;

class Item{
    private:
    string name;
    int price;
    int qty;
    public:
    Item(){};
    Item(string n, int p, int q){
        this->name = n;
        this->price = p;
        this->qty = q;
    }
    friend ofstream & operator<<(ofstream &ofs, Item &i);
    friend ifstream & operator>>(ifstream &ifs, Item &i);
    friend ostream & operator<<(ostream &os, Item &i);
};

int main(){
    int num;
    string name;
    int price;
    int qty;
    cout<<"Enter total no of Items: ";
    cin>>num;
    vector<Item *> list;
    for(int i = 0;i<num;i++){
        cout<<"Enter details for Item "<<i+1<<" : ";
        cin>>name>>price>>qty;
        list.push_back(new Item(name,price,qty));
    }

    ofstream fos("Record.txt",ios::trunc);
    vector<Item *>::iterator itr;

    for(itr=list.begin();itr!=list.end();itr++){
        fos<<**itr;
    }

    Item *p = new Item();
    ifstream ifs("Record.txt");
    for(int i=0;i<num;i++){
        ifs>>*p;
        cout<<"Item: "<<*p<<endl;
    }

}

ofstream & operator<<(ofstream &ofs, Item &i){
    ofs<<endl<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Item &i){
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}

ostream & operator<<(ostream &os, Item &i){
    os<<endl<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return os;
}