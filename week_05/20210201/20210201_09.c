/*
Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа.
*/

#include <stdio.h>
#include <string.h>

void reverse(char *s);
void itoa(int n, char *str);

int main(void){
    int iValue = 0;
    scanf("%d", &iValue);
    
    char str[16];
    
    itoa(iValue, str);
    reverse(str);
    
    printf("The converted string is: %s \n", str);

return 0;
}

void reverse(char *s)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

return;
}

void itoa(int n, char *str){
    int i = 0;
    do
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
    } while (n != 0);

return;
}
