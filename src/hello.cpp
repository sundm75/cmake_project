#include "hello.h"

void HELLO::say_hello() {
    std::cout << "Hello, World!" << std::endl;
}

int main()
{
    HELLO hello;
    hello.say_hello();

    system("pause"); // pause the program
    return 0;
}