//запрашивает у пользователя целое число, а затем возвращает его в main();
#include <iostream>

int readNumber() {
    std::cout << "Enter a number :";
    int n;
    std::cin >> n;
    return n;
}

// выводит результат на экран Функция должна быть без возвращаемого значения и иметь только один параметр;
void  writeAnswer(int n) {
    std::cout << "Summ == " << n << std::endl;
}