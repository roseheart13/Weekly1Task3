

#include <iostream>
#include <string>

int age;
int A = 20;
int B = 40;
int C = 60;


int main()
{
    std::cout << "What is your age: ";
    std::cin >> age;

    std::cout << "You are " << age << " years old" << std::endl;

    if (age < A) {
        std::cout << "You are young";
    }
    if (age >= A & age <= B) {
        std::cout << "You are a grown up";
    }
    if (age > B & age < C) {
        std::cout << "You are old";
    }
    if (age >= C) {
        std::cout << "You ARE really old!";
    }
}

