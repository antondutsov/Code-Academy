#include <stdio.h>

int main(){
    int mask = 123;
    int value = 13257;
    int newValue = value & mask;

    printf("%d",newValue);

    return 0;

}
