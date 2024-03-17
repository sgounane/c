#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc , char* argv[]){
    float a , b ;
    char op;
    if (argc != 4)
    {
        printf("Error");
        return 1;
    }
    printf("arguments : %d\n",argc);
    for (int i = 0 ; i < argc ; i++){
        printf("%d : %s\n", i, argv[i]);
    }
    a = atoi(argv[1]);     // la fonction atoi() sert à
    op = *argv[2];         // convertir une chaîne de caractère (contenant des nombres)
    b = atoi(argv[3]) ;    // en un float/int 
    
    switch(op){
        case '+': 
            printf("result is : %.2f",a+b);
            break;
        case '-': 
            printf("result is : %.2f",a-b);
            break;
        case 'x': 
            printf("result is : %.2f",a*b);
            break;
        case '/': 
            
            printf("result is : %.2f", a/b );
            break;
        default:
            printf("operation invalid");
            break;
    }
    return 0;
}
