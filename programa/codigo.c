#include<stdio.h>

main(){
    int i;

    do
    {
        printf("\t\tOs sorvetes sao:\n");
        printf("Chocolate = 1\n");
        printf("Morango = 2\n");
        printf("Flocos = 3");
        printf("Escolha uma opcao");
        scanf("%d", &i);
    }while((i<1) || (i>3));
    switch(i){
        case 1:
        printf("Voce escolheu o sorvete de chocolate");
        break;
        case 2:
        printf("Voce escolheu o sorvete de morango");
        break;
        case 3:
        printf("Voce escolheu o sorvete de flocos");
        break;
    }
    return 0;    
}