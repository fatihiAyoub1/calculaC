// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int sum (){
    int number1,number2;
    printf("entre le valeur Number 1:");
    scanf("%d",&number1);
       printf("entre le valeur Number 2:");
    scanf("%d",&number2);
    int resulta = number1+number2;
    printf("resluta de la somme %d",resulta);
}
int moins (){
    int number1,number2;
    printf("entre le valeur Number 1:");
    scanf("%d",&number1);
       printf("entre le valeur Number 2:");
    scanf("%d",&number2);
    int resulta = number1-number2;
    printf("resluta de la somme %d \n",resulta);
}
int multuption(){
    int number1,number2;
    printf("entre le valeur Number 1:");
    scanf("%d",&number1);
       printf("entre le valeur Number 2:");
    scanf("%d",&number2);
    int resulta = number1*number2;
    printf("resluta de la multipation \n  %d",resulta);
}
int division(){
    int number1,number2;
    printf("entre le valeur Number 1:");
    scanf("%d",&number1);
       printf("entre le valeur Number 2:");
    scanf("%d",&number2);
    int resulta = number1/number2;
    printf("resluta de la division \n %d",resulta);
}
int main() {
    // Write C code here
    int i ;
while (i=1){
    int choix;
      printf("\n 1=sum \n 2=mois\n multiption=4 \n devision =3:\n quter=8 \n");
    printf("entre le valeur choix:");
    scanf("%d",&choix);
    switch(choix){
        case 1:
        sum ();
        break;
        case 2:
        moins();
        break;
        case 3:
        division();
        break;
        case 4:
       multuption();
        break;
        case 8:
       return 1;
        break;
        default:
        printf("ajouter les choix peur menu ");
        
    }
   i++;
}
   

    return 0;
}