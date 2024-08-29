#include<bits/stdc++.h>
using namespace std;

struct Product {
    
    string name;
    int price;
    int quantity;
    
};


int main(){
    int n;
    cin>>n;
    Product obj[n];
    for(int i=0;i<10;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter price";
        cin>>obj[i].price;
        cout<<"enter quantity";
        cin>>obj[i].quantity;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=obj[i].price * obj[i].quantity;
    }
    cout<<sum;
    
    return 0;
}
