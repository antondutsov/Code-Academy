/*
8. Да прочетем какво се случва със стойността на променливата x:
char x = 8;
x = x - 2;
x = x + 6;
x = x – 10 + 2;
Каква ще бъде стойността на x, ако я отпечатаме на екрана след последната
калкулация?
*/

#include <stdio.h>

int main(){

    char x = 8;
    printf("\nИнициализираме променливата 'x' от тип 'char' и присвояваме стойност '8'. \n");
    printf("\tchar x = 8; \n");
    x = x - 2;
    x = x + 6;
    x = x - 10 + 2;
    printf("\nСлед това заместваме х със стойността която сме му присвоили и извършваме аритметическите действия. \n");
    printf("\tx = x - 2; \n");
    printf("\nСлед като сме приключили с пресмятането на 'x' вече имаме нова стойност от което следва ново аритметично действие. \n");
    printf("\tx = x + 6; \n");
    printf("\nИзвършваме последното пресмятане на 'x' и записваенто на новата му стойност, която ще изведем в следващата стъпка. \n");
    printf("\tx = x - 10 + 2; \n");
    printf("\nИзвеждаме последната записана стойност на 'x', която е резултата от заместването му след всяко пресмятане. \n");
    printf("\t'X' е равно на %d \n", x);



return 0;
}
