#include <stdio.h>

typedef int Integer;
typedef double Double; 
typedef char Character;

int main() {
    Integer intValue = 26;
    Double doubleValue = 2.6;
    Character charValue = 'A';

    printf("%d\n", intValue);
    printf("%f\n", doubleValue);
    printf("%c", charValue);
    
    return 0;
}
