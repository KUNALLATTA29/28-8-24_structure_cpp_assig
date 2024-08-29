#include<bits/stdc++.h>
using namespace std;

struct Student {
    
    string name;
    int rollno;
    int marks[5];
    float ave(){
        float ans =0;
        for(int i=0;i<5;i++){
            ans+=marks[i];
        }
        return ans/5.0;
    }
};


int main(){
    
    Student obj;
    cin>>obj.name;
    cin>>obj.rollno;
    for(int i=0;i<5;i++){
        cin>>obj.marks[i];
    }
    cout<<obj.ave();
    return 0;
}
