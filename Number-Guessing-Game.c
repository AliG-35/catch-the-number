#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int tahmin;
    printf("====Welcome to the Number Guessing Game!====\n");
    int hak=5;
    printf("I have selected a number between 0 and 99. You have %d attempts.\n", hak);
    srand(time(NULL));
    int sayi = rand()%100;


    while(1){
        scanf("%d",&tahmin);
        if(tahmin == sayi && hak == 5){
            printf("Outstanding! You guessed the number on your first attempt.\n");
            return 0;
        }
        if(tahmin == sayi){
            printf("Congratulations! Your guess is correct.\n");
            return 0;
        }
        if(tahmin>sayi){
                --hak;
            printf("The target number is lower. Attempts remaining: %d\n", hak);
        }
        if(tahmin<sayi){
                --hak;
            printf("The target number is higher. Attempts remaining: %d\n", hak);
        }
        if(hak==0){
            printf("\nGame Over. You have exhausted all attempts.\n");
            printf("The target number was: %d\n", sayi);
            return 0;
        }
        }
    return 0;
}

