/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#define WAGE_RH 3500
#define SIZE_SECTOR 10
#define SIZE_PERSON 10
#define SIZE_TI 5
#define VALUE_HOUR_TI 69.59
#define VALUE_HOUR_SAC 42.50

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int option, sector;
    float db_wage[SIZE_SECTOR][SIZE_PERSON]; //Representa��o de um banco de dados para sal�rio representado pela matriz
    float hours;
    
   do{
    system("cls"); 
    printf("***\tPORTAL RH - MIB CONSTRU��ES\t***");
    printf("\n");
    printf("1- Lan�ar Folha de Pagamento\n2- Gerar Relat�rio\n0- Sair\n");
    printf("_> ");
    scanf("%d", &option);
    
    switch (option){
        case 1:
            do{
                system("cls");
                printf("***\tFOLHA DE PAGAMENTO\t***\n");
                printf("1- Calcular Setor RH\n2- Calcular Setor TI\n3- Calcular Setor SAC\n0- Sair\n_> ");
                scanf("%d", &sector);
                
                switch(sector){
                    case 1:
                        for(int i=0;i<SIZE_PERSON;i++){
                            db_wage[0][i] = WAGE_RH;
                        }
                        printf("Folha de Pagamento Lan�ada ...");
                        system("pause");
                    break;
                    case 2:
                        for(int i=0;i<SIZE_TI;i++){
                            printf("%d� FUNC. [HORAS TRABALHADAS]: ", i+1);
                            scanf("%f", &hours);
                            
                            db_wage[1][i] = VALUE_HOUR_TI * hours;
                        }
                    break;
                    case 3:
                        for(int i=0;i<SIZE_PERSON;i++){
                            printf("%d� FUNC. [HORAS TRABALHADAS]: ", i+1);
                            scanf("%f", &hours);
                            
                            db_wage[2][i] = VALUE_HOUR_SAC * hours;
                        }
                    break;
                    case 0:
                    break;
                    default: printf("Op��es Inv�lida!");
                    
                } //Fechamento segundo Switch
                
            }while(sector!=0);
        break;
        case 2:
        
            for(int i=0;i<SIZE_SECTOR;i++){
                switch(i){
                    case 0: printf("***\tFOLHA RH\t***\n");
                    break;
                    case 1: printf("***\tFOLHA TI\t***\n");
                    break;
                    case 2: printf("***\tFOLHA SAC\t***\n");
                    break;
                }
                for(int j=0;j<SIZE_PERSON;j++){
                    if(!((i==1) && (j==SIZE_TI)))
                        printf("%d� FUNC.: R$ %.2f\n",j+1, db_wage[i][j]);
                    else
                        break;
                }
            }
            system("pause");
        break;
        case 0:printf("Exiting Program ...");break;
        
        default: 
            printf("Op��es Inv�lida!\n");
            system("pause");
            
    } //Fechamento primeiro Switch
       
   }while(option!=0);

    return 0;
}
