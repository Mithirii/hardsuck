#include <stdio.h>
#include <stdlib.h>

int suma=0;

void wydajreszte(int a){
    if(a<=0);
    else if(a>=10){
        printf("%d banknotow 10 zlotowych\n",a/10);
        suma=suma+a/10;
        return wydajreszte(a-a/10*10);
    }
    else if(a>=5){
        printf("%d moneta 5 zlotowa\n",a/5);
        suma=suma+a/5;
        return wydajreszte(a%5);
    }
    else if(a>=2){
        printf("%d moneta 2 zlotowa\n",a/2);
        suma=suma+a/2;
        return wydajreszte(a%2);
    }
    else{
        printf("1 moneta 1 zlotowa\n");
        suma++;
    }

}

int main()
{
    int a;
    printf("Podaj ilosc pieniedzy do wydania:");
    scanf("%d",&a);
    wydajreszte(a);
    printf("Suma monet i banknotow:%d",suma);

    return 0;
}
