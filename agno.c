
#include<stdio.h>

int vize_notu ;

int final_notu ;

float toplam ;
int main()
{
    printf("vize notunuzu giriniz");

    scanf("%d",&vize_notu);

    printf("final notunu girniz");

    scanf("%d",&final_notu);
    
    toplam = vize_notu * 0.3 + final_notu * 0.7 ;
    
    if (toplam >= 80 && toplam <= 100)
    {
        printf("Bu dersten aldığınız not AA");
    }
    else if (toplam >= 70 && toplam <=79)
    {
        printf("Bu dersten aldığınız not BB");
    }
          
}