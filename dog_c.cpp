// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

//Car class
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
        
        void birthday(int a) {
            this->age = a++;
            cout << a <<"\n";
        };
        
        void woof() {
            cout<<"Woof!";
        };
    
};

int main() {
    Dog dog1("Reksis", 6);
    cout<<dog1.name;
    cout<<"\n";
    dog1.birthday(6);
    dog1.woof();

    return 0;
}
