/*
10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска: printf("Dobre doshli v Karavani Kempeti pod naem\n");
printf("Ako zelaete karavana natisnete 1\n");
printf("Ako zelaete kemper natisnete 2\n");
Направете една променлива int rez; , в която да запишем резултатът от неговия
избор.
...
*/
#include <stdio.h>

int main(){


    char caravan = 3;
    char caravanDayRent = 90;
    char kemper = 3;
    char kemperDayRent = 100;

    int rez = 0;

    printf("Добре дошли в \"Каравани Кемпери под наем\".\n");

    printf("Ако желаете \"Каравана\" натиснете '1'\nАко желаете \"Кемпер\" натиснете '2' \n", &rez);
  //  printf("Ако желаете \"Кемпер\" натиснете '2'", &rez);

    scanf("%i", &rez);
    printf("Вие избрахте %i. Благодарим Ви за избора!", rez);
return 0;
}
