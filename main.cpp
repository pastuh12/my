#include <iostream>

int main()
{   
    const int max_length = 50; // максимальная длина строки (включая нулевой байт \0)
    char langs[][max_length] = {
        "C++", "C#",  "Python", "Java",
        "Kotlin", "Go", "Dart", "PHP"
    };
    std::cout << langs[0] << std::endl;     // C++
    std::cout << langs[1] << std::endl;     // C#
    std::cout << langs[2] << std::endl;     // Python
}