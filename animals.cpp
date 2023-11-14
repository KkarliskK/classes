// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Animal{
    protected:
        int age;
        
    public: 
        string name;
        
        Animal(string name, int age){
            name = name;
            age = age;
        };
        
        void birthday() {
            this->age++;
        };
        
        virtual void makeSound() = 0;
};

class Cat : public Animal{
    public:

        Cat(string name, int age) : Animal(name, age) {};
    
        void makeSound(){
            cout << "meow" << endl;
        }
    
};

class Dog : public Animal {
    public: 
        
        Dog(string name, int age) : Animal(name, age) {};
        
        void makeSound() {
            cout<<"Woof!" << endl;
        };
    
};
int main() {
    
    Dog dog1("Reksis", 6);
    cout<<dog1.name + "\n";
    dog1.makeSound();
    
    Cat cat1("Mincis", 2);
    cout <<  cat1.name + "\n";
    cat1.makeSound();

    return 0;
}
