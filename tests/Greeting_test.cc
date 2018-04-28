#include "gtest/gtest.h"
#include "src/lib/Greeting.h"

TEST(GreetingShould, ReturnHelloWorld){
    Greeting *greet = new Greeting();
    std::string actual = greet->getGreetingMessage();
    std::string expected = "Hello World!";
    EXPECT_EQ(expected, actual);
}