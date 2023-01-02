// #include <iostream>
// #include<fstream>
// using namespace std;
// class Item{
//     private:
//     string name;
//     float price;
//     int qty;
//     public:
//         Item(){}
//         Item(string n,float p,int q);
//         friend ifstream & operator>>(ifstream &fis,Item &i);
//         friend ofstream & operator<<(ofstream &fos,Item &i);
//         friend ostream & operator<<(ostream &os,Item &i);};

// int main(){
//     int n;string name;float price;int qty;
//     cout<<"Enter number of Item:";
//     cin>>n;
//     Item *list[n];
//     cout<<"Enter All Item "<<endl;
//     for(int i=0;i<n;i++)
//         {
//             cout<<"Enter "<<i+1<<" Item Name , price and quantity";
//             cin>>name;cin>>price;cin>>qty;
//             list[i]=new Item(name,price,qty);    
//         }
//     ofstream fos("Items.txt");for(int i=0;i<n;i++)
//         {
//             fos<<*list[i];
//         }
//     Item item;
//     ifstream fis("Items.txt");
//     for(int i=0;i<n;i++)
//         {   
//             fis>>item;
//             cout<<"Item "<<i+1<<item<<endl;
// }
// }
// Item::Item(string n, float p, int q)
// {
//     name = n;
//     price = p;
//     qty = q;
// }
// ofstream &operator<<(ofstream &fos, Item &i)
// {
//     fos << i.name << endl
//         << i.price << endl
//         << i.qty << endl;
//     return fos;
// }
// ifstream &operator>>(ifstream &fis, Item &i)
// {
//     fis >> i.name >> i.price >> i.qty;
//     return fis;
// }
// ostream &operator<<(ostream &os, Item &i)
// {
//     os << i.name << endl
//        << i.price << endl
//        << i.qty << endl;
//     return os;
// }

#include <iostream>
#include <fstream>

using namespace std;

class Item{
    private:
    string name;
    int price;
    int qty;
    public:
    Item(){


    };
    Item(string n, int p, int q){
        name = n;
        price = p;
        qty = q;
    }
    friend ofstream & operator<<(ofstream &ofs, Item &i);
    friend ifstream & operator>>(ifstream &ifs, Item &i);
    friend ostream & operator<<(ostream &os, Item &i);
};

int main(){
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    string name;
    int price;
    int qty;
    Item *list[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter detalis for item "<<i+1<<"(Name Price Qty): ";
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Item(name,price,qty);
    }
    ofstream ofs("RecordFile.txt",ios::trunc);
    for(int i=0;i<n;i++)
        {
            ofs<<*list[i];
        }
    ofs.close();
    Item item;
    ifstream fis("RecordFile.txt");
    for(int i=0;i<n;i++)
        {   
            fis>>item;
            cout<<"Item "<<(i+1)<<item<<endl;
        }
    fis.close();
}

ofstream & operator<<(ofstream &ofs, Item &i){
    ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Item &i){
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}
ostream &operator<<(ostream &os, Item &i)
{
    os << i.name << endl
       << i.price << endl
       << i.qty << endl;
    return os;
}