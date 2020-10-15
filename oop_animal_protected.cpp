#include <iostream>

class animal {
public:
    virtual void say() {}
protected:
    virtual void print(std::string str) {
        std::cout << str;
    }
};

class dog : public animal {
public:
    void say() override {
        print("bark\n");
    }
};

class cat : public animal {
public:
    void say() override {
        print("meow\n");
    }
};

int main()
{
    cat catto;
    dog doggo;
    catto.say();
    doggo.say();
    return 0;
}

