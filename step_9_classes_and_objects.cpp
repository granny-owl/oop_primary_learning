#include <iostream>
#include <vector>
#include <ctime>

class character {

    public:

    std::string ch_type;

    int rand_act() {
        int act = rand() % 3 + 1;
        return act;
    }

    void action(int act) {
        switch (act) {
        case 1:
            if (ch_type == "doggo") {
                std::cout << "BARK!" << '\n';
            }
            if (ch_type == "catto") {
                std::cout << "MEOW!" << '\n';
            }
            break;

        case 2:
            if (ch_type == "doggo") {
                std::cout << "wwww..woof" << '\n';
            }
            if (ch_type == "catto") {
                std::cout << "meeeooow" << '\n';
            }
            break;

        case 3:
            if (ch_type == "doggo") {
                std::cout << "arrrgghhh" << '\n';
            }
            if (ch_type == "catto") {
                std::cout << "purrrrrrr" << '\n';
            }
            break;
        }
    }

};


int main()
{
    character animal;

    std::cout << "Choose catto or doggo" << '\n';
    std::cin >> animal.ch_type;
    srand(time(0));
    int a = animal.rand_act();
    animal.action(a);

    return 0;
}