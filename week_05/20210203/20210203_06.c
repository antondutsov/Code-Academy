/*
Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b)
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int *p1 = &a;
    int *p2 = &b;

    printf("Въведете две цели числа за размяна: \n");
        printf("Въведете стойността на 'a': ");
    scanf("%d", &a);
        printf("Въведете стойността на 'b': ");
    scanf("%d", &b);

    p1 = b;
    p2 = a;

    printf("Стойността на 'a' е: %d\n", p1);
    printf("Стойността на 'b' е: %d\n", p2);
    
return 0;
}
