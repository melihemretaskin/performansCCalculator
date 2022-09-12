#include <stdio.h>
#include <windows.system.h>
void sec();
void err();
void hello();
void information();
void systempause();
void num(int x,int y);
int main(){

    information();
    hello();
    sec();

return 1;
}

void sec(){
    int x;
    int y;
    char s = '+,-,/,*';

    printf("Yapmak istediginiz islemin simgesini giriniz:");
    scanf("%s",&s);

    printf("\n isleminizi sectiniz biraz bekleyiniz ... \n");
    system("\npause\n");


    if(s =='+'){
        num(0,0);
        printf("Toplama islemi yapiliyor...\n");
        systempause();
        int x;
        int y;
        printf("ilk sayi>>");
        scanf("%d",&x);
        printf("ikinci sayi>>");
        scanf("%d",&y);
        printf("%d + %d = %d \n",x,y,x+y);

    }
    else if(s =='-'){
        num(0,0);
        printf("Cikarma islemi yapiliyor...\n");
        systempause();
        printf("ilk sayi>>");
        scanf("%d",&x);
        printf("ikinci sayi>>");
        scanf("%d",&y);
        printf("%d - %d = %d \n",x,y,x-y);

    }
    else if(s =='/'){
        num(0,0);
        printf("Bolme islemi yapiliyor ...\n");
        systempause();
        printf("ilk sayi>>");
        scanf("%d",&x);
        printf("ikinci sayi>>");
        scanf("%d",&y);
        printf("%d / %d = %d \n",x,y,x/y);


    }
    else if(s =='*'){
        num(0,0);
        printf("Carpma islemi yapiliyor ...\n");
        systempause();
        printf("ilk sayi>>");
        scanf("%d",&x);
        printf("ikinci sayi>>");
        scanf("%d",&y);printf("%d * %d = %d \n",x,y,x*y);

    }
    else{
        err();
    }

    systempause();


    return sec();

}
void err(){
    printf("\n Hata! 4 islem sembollerinden birini giriniz! \n");
}
void hello(){
    printf("\nHosgeldiniz!\n");
}
void information(){
    printf("Toplama icin '+' \n "
           "Cikarma icin '-' \n "
           " Bolme icin '/' \n "
           "  Carpma icin '*' girmeniz gerekmektedir ");
}
void num(int x,int y){

}
void systempause(){
    system("\npause\n");

}
