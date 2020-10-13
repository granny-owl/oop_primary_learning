#include <iostream>

struct animal {
    virtual void sound() {

    }
};

struct dog : public animal {
    void sound() override {
        std::cout << "bark\n";
    }
};

struct cat : public animal {
    void sound() override {
        std::cout << "meow\n";
    }
};

int main()
{
    dog doggo;
    cat catto;
    catto.sound();
    doggo.sound();
    return 0;
}

