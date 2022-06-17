#include <stdio.h>
void odd_even(int n);
void odd_2even(int n);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    odd_even(a);
    printf("\n");
    odd_2even(b);
    
    return 0;
}
void odd_even(int n){
    while(n!=0){
        if(n%2==0){
            printf("Even");
            break;
        }else{
            printf("Odd");
            break;
        }
        
    }
}
void odd_2even(int n){
    odd_even(n);
}
