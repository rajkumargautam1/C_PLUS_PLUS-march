#include<bits/stdc++.h>
using namespace std;

class customer{
    public:
        char* name;
        int age;
        char gender;
        double credits;

        customer(char* n, int a, char g, double c){
            cout<< "i am inside the parameterised constructor of the customer class"<<endl;
            name= new char[100];
            strcpy(name, n);
            age =a;
            gender = g;
            credits =c;
  
        }

        void printcustomerinfo(){
            cout<<"customer information"<<endl;
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"gender :"<<gender<<endl;
            cout<<"credits :"<<credits<<endl;
        }
};

int main(){

    customer c("raj", 19, 'm', 5000);

    customer c2 =c;
    
    strcpy(c2.name,"sasuke");

    c2.age =21;



    // c2.printcustomerinfo();
    cout<<c2.name <<endl;
    cout<<c.name <<endl;

    cout<<c.age<<endl;
    cout<<c2.age<<endl;


    


    return 0;

}