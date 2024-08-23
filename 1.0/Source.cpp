#include <iostream>
#include <stdio.h>
#include <time.h>

void LogPass(bool spc, bool num, int l) {
    int random, n;
    char cap, low, sym;
    for (int i = 0; i < (l-2); i++) {
        random = rand() % 4;
        cap = (rand() % 26) + 65;
        low = (rand() % 26) + 97;
        sym = (rand() % 6) + 33;
        n = rand() % 10;
        switch(random) {
            case 0:
                std::cout << cap;
                break;
            case 1:
                std::cout << low;
                break;
            case 2:
                if (spc == 1) {
                    std::cout << sym;
                    break;
                } else {
                    std::cout << low;
                    break;
                }
            case 3:
                if (num == 1) {
                    std::cout << n;
                    break;
                } else {
                    std::cout << low;
                    break;
                }
        }
    }
}

int main () {
    srand(time(NULL));
    bool spc, num;
    int l;

    std::cout << "Length of password (in characters) : ";
    std::cin >> l;
    std::cout << "Special Characters? (0 for False, 1 for True) : ";
    std::cin >> spc;
    std::cout << "Numbers? (0 for False, 1 for True) : ";
    std::cin >> num;

    LogPass(spc, num, l);

    std::cout << "\n";
    system("pause");
}