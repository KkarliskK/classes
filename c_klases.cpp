// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

//Car class
class Car {
    //ipashibas
    
    private:
        float mileage;
        
    public:
        string brand;
        
        Car(string b, float m) {
            brand = b;
            mileage = m;
            cout << brand << " is created! \n";
        }
        
        ~Car() {
            cout << brand << "is dead! \n";
        }
        
        float getMileage(){
            return this->mileage;
        }
        
        //metode makeNoise()
        void makeNoise() {
            cout << "Vroom, Vroom!! \n";
        };
    
};

int main() {
    Car car1("Vulva ", 277428);
    cout<< car1.brand;
    //car1.makeNoise();
    cout<<"\n";
    
    Car* car2 = new Car("BMW 320d ", 400123);
    cout<< car2-> brand;
    // car2-> makeNoise();
    return 0;
}
