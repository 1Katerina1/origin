#include <iostream>
#include <dlfcn.h>
#include "leaver.h"

int main() {
    void* handle = dlopen("./libleaver.so", RTLD_LAZY);

    if (!handle) {
        std::cerr << "Не удалось загрузить библиотеку!" << std::endl;
        return 1;
    }

    Leaver* (*createLeaver)() = (Leaver* (*)())dlsym(handle, "newLeaver");

    if (!createLeaver) {
        std::cerr << "Не удалось получить указатель на функцию создания объекта Leaver!" << std::endl;
        dlclose(handle);
        return 1;
    }

    Leaver* leaver = createLeaver();

    std::string name;
    std::cout << "Введите ваше имя: ";
    std::cin >> name;

    std::string farewell = leaver->leave(name);
    std::cout << farewell << std::endl;

    delete leaver;
    dlclose(handle);

    return 0;
}