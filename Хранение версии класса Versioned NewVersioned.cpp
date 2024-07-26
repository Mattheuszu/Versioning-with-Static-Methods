/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Versioned {
public:
    // Сделаем метод статическим и константным, чтобы он мог вызываться без создания объекта
    static double getVersion() {
        return 1.0; // Возвращаем версию напрямую
    }
};

class NewVersioned : public Versioned {
public:
    // Переопределяем метод для возвращения другой версии
    static double getVersion() {
        return 2.0; // Новая версия для производного класса
    }
};

int main() {
    // Так как методы статические, мы можем вызвать их, используя имя класса
    std::cout << "Versioned: " << Versioned::getVersion() << std::endl;
    std::cout << "NewVersioned: " << NewVersioned::getVersion() << std::endl;

    return 0;
}

