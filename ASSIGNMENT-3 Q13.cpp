#include <iostream>

const char* concat(const char* str1, const char* str2) {
    static char result[256];
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return result;
}

const char* concat(int num, const char* str) {
    static char result[256];
    int i = 0;

    if (num == 0) {
        result[i++] = '0';
    }

    while (num > 0) {
        result[i++] = (num % 10) + '0';
        num /= 10;
    }

    result[i] = '\0';
    return concat(result, str);
}

int main() {
    std::cout << concat("Hello, ", "world!") << std::endl;
    std::cout << concat(123, " apples") << std::endl;
    return 0;
}
