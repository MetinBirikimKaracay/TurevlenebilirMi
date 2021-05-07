#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int a,b,c,d,x,temp,turev,sonuc,artan,azalan;
    int Limit_Sag[3];
    int Limit_Sol[3];

int main(){

    girdi();
    limitHesapla();

    if(artan==azalan){
        printf("Limit Var, Turevlenebilir\n");
        printf("Turev =>> %dx^2 + %dx + %d \n",(3*a),(2*b),c);
        turev = (3*a*pow(x,2))+(2*b*x)+(c);
        printf("X = %d icin Fonksiyonun Turevi -> %d\n",x,turev);

    }else{
        printf("Limit Yok, Turevlenemez");
    }

}
//Girdi Al
int girdi(){

    printf("Fonksiyonun a Degerini Giriniz :");
    scanf("%d",&a);
    printf("Fonksiyonun b Degerini Giriniz :");
    scanf("%d",&b);
    printf("Fonksiyonun c Degerini Giriniz :");
    scanf("%d",&c);
    printf("Fonksiyonun d Degerini Giriniz :");
    scanf("%d",&d);
    printf("\nFonksiyonun x Degerini Giriniz :");
    scanf("%d",&x);
}

int fonk(){
    //ax^3 +bx^2 +cx +d;
    sonuc = a*pow(temp,3) + b*pow(temp,2) + c*temp + d;
    return sonuc;
}

int limitHesapla(){

    temp = x + 1;
    Limit_Sag[0]=fonk(a,b,c,d,temp);
    printf("1. Sagdan Limit :%d\n",Limit_Sag[0]);
    temp = x + 2;
    Limit_Sag[1]=fonk(a,b,c,d,temp);
    printf("2. Sagdan Limit :%d\n",Limit_Sag[1]);
    temp = x + 3;
    Limit_Sag[2]=fonk(a,b,c,d,temp);
    printf("3. Sagdan Limit :%d\n",Limit_Sag[2]);

    temp = x - 1;
    Limit_Sol[0]=fonk(a,b,c,d,temp);
    printf("1.Soldan Limit :%d\n",Limit_Sol[0]);
    temp = x - 2;
    Limit_Sol[1]=fonk(a,b,c,d,temp);
    printf("2.Soldan Limit :%d\n",Limit_Sol[1]);
    temp = x - 3;
    Limit_Sol[2]=fonk(a,b,c,d,temp);
    printf("3.Soldan Limit :%d\n",Limit_Sol[2]);

    if(Limit_Sag[0]<Limit_Sag[1] && Limit_Sag[1]<Limit_Sag[2]){
        artan = 1;
    }else{
        artan = -1;
    }
    if(Limit_Sol[0]<Limit_Sol[1] && Limit_Sol[1]<Limit_Sol[2]){
        azalan = 1;
    }else{
        azalan = +1;
    }
}
