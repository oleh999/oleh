#include <stdio.h>
#include <stdlib.h>


int main(){
    int var, Fx, X;
    double X1, X2, delta;
    unsigned int N;

    printf("Write 1 or 2 to choose variant.\n");
    scanf("%d", &var );
    printf("You chose variant: %d.\n", var );

        switch(var) {
            case 1: printf("Now you need to write 3 options: first argument, last argument and number of table points.\n");
                    scanf("%lf", &X1);
                    scanf("%lf", &X2);
                    scanf("%u", &N);
                    printf("First argument:%.lf, Last argument:%.lf, Number of table points:%d.\n", X1, X2, N);
                    printf("+-----------------------+---------------------------+---------------------------+\n");
                    printf("|           n           |             x             |            F(x)           |\n");
                    printf("+-----------------------+---------------------------+---------------------------+\n");
                    for(int i = 0; i<N; i++){
                            X=X1*(i+1);
                            Fx=X*9;
                            printf("|          %d            |            %d              |            %d              |\n", i+1, X, Fx );
                            printf("+-----------------------+---------------------------+---------------------------+\n");
                        }
                    break;
                 case 2: printf("Now you need to write 3 options: first argument, argument change step.\n");
                    scanf("%lf", &X1);
                    scanf("%lf", &X2);
                    scanf("%lf", &delta);
                    printf("First argument:%.lf, Last argument:%.lf, Argument change step:%lf.\n", X1, X2, delta);
                    printf("+-----------------------+---------------------------+---------------------------+\n");
                    printf("|           n           |             x             |            F(x)           |\n");
                    printf("+-----------------------+---------------------------+---------------------------+\n");
                    for(int i = 0; i<X2; i++){
                            X=X1*(i+1);
                            Fx=X*3;
                            printf("|          %d            |            %d              |            %d              |\n", i+1, X, Fx );
                            printf("+-----------------------+---------------------------+---------------------------+\n");
                            X1=X1+delta;
                            }

             break;

           default: printf("Error: there is not variant %d\n", var);

        }
    return 0;
}
