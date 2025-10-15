#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }
    virtual ~Animal() {
        cout << "Animal destructor called." << endl;
    }

    // Pure virtual function (abstract method)
    virtual void makeSound() = 0;

    // Virtual function
    virtual void eat() {
        cout << "This animal eats food." << endl;
    }

    // Non-virtual function
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << ">> Dog constructor called." << endl;
    }
    ~Dog() override {
        cout << "<< Dog destructor called." << endl;
    }

    void makeSound() override {
        cout << "Woof!" << endl;
    }

    void eat() override {
        cout << "The dog eats dog food." << endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        cout << ">> Cat constructor called." << endl;
    }
    ~Cat() override {
        cout << "<< Cat destructor called." << endl;
    }

    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

class Labrador : public Dog {
public:
    Labrador() {
        cout << ">>> Labrador constructor called." << endl;
    }
    ~Labrador() override {
        cout << "<<< Labrador destructor called." << endl;
    }

    void makeSound() override {
        cout << "Labrador Woof!" << endl;
    }
};

int main() {
    cout << "\n=== Static Allocation ===" << endl;
    static Dog staticDog;
    cout << endl;

    cout << "\n=== Stack Allocation ===" << endl;
    Labrador stackLabrador;
    cout << endl;

    cout << "\n=== Heap Allocation ===" << endl;
    Animal* heapCat = new Cat();
    cout << endl;

    cout << "\n=== Polymorphic Variable (Array of Animal Pointers) ===" << endl;
    Animal* animals[3] = { &staticDog, &stackLabrador, heapCat };

    for (int i = 0; i < 3; i++) {
        cout << "\n--- Animal number " << i + 1 << " ---" << endl;
        animals[i]->makeSound();
        animals[i]->eat();
        animals[i]->breathe();
    }

    cout << "\n=== Memory Cleanup ===" << endl;
    delete heapCat;

    cout << "\n=== End of Program ===" << endl;
    return 0;
}
