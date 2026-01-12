#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }

    printf("NAME :- Nishant Bhagat\nERP :- 10898");
    
    return 0;
}