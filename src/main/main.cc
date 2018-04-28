#include <iostream>
#include "src/lib/Greeting.h"

int main()
{
    Greeting *greet = new Greeting();
    std::cout << greet->getGreetingMessage() << std::endl;

    return EXIT_SUCCESS;
}