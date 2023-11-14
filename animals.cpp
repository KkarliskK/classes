// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Animal{
    
};

class Cat{
    private:
        int age;
    
    public: 
        string name;
    
        Cat(string n, int a){
            name = n;
            age = a;
        };
        
        void birthday(){
            this->age++;
        }
        
        void meow(){
            cout << "meow";
        }
    
};

class Dog {
    //ipashibas
    
    private:
        int age;
        
    public:
        string name;
        
        Dog(string n, int a) {
            name = n;
            age = a;
        }
        
        void birthday() {
            this->age++;
        };
        
        void woof() {
            cout<<"Woof!" << endl;
        };
    
};
int main() {
    
    Dog dog1("Reksis", 6);
    cout<<dog1.name + "\n";
    dog1.woof();
    
    Cat cat1("Mincis", 2);
    cout <<  cat1.name + "\n";
    cat1.meow();

    return 0;
}
