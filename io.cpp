//����������� � ������������ ����� �����, � ����� ���������� ��� � main();
#include <iostream>

int readNumber() {
    std::cout << "Enter a number :";
    int n;
    std::cin >> n;
    return n;
}

// ������� ��������� �� ����� ������� ������ ���� ��� ������������� �������� � ����� ������ ���� ��������;
void  writeAnswer(int n) {
    std::cout << "Summ == " << n << std::endl;
}