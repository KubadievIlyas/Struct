/*
Задание 1. С клавиатуры ввести строку, состоящую из нескольких слов, разделенных пробелом.
Для хранения строки использовать новый тип данных TEXT, веденный с помощью typedef.
Написать функцию подсчета количества слов в строке
*/

#include <stdio.h>

typedef char TEXT[100];

int func_count(TEXT str) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ' && !in_word) {
            count++;
            in_word = 1;
        } 
        else if (str[i] != ' ') 
            in_word = 0;
        
    }

    return count;
}

int main() {
    TEXT input;
    scanf("%c", input);

    int wordCount = func_count(input);
    printf("%d", wordCount);

    return 0;
}
