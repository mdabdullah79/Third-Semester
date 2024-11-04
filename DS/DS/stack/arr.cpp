#include<bits/stdc++.h>
using namespace std;

class person{
    string name;
    int age;
    public:
    void set(string nam,int a){
        name = nam;
        age = a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age:  "<<age<<endl;
    }

};

int main(){
    person obj;
    obj.set("Abdullah",79);
    obj.display();

    return 0;
}