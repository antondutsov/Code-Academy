/*
Задача 8. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете последните шпациите и табулациите в стринга
*/


#include <stdio.h>

int main(void){
    char c;
    while ((c = getchar()) != EOF){
        if ((c == '\0' && c == ' ') || (c == '\n' && c == '\t')){
                putchar(c);;
            }
            putchar(c);
    }
    return 0;
}
