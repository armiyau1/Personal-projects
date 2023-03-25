#include <stdio.h>
int main(){
    int n=15;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            printf("FIZZ\n");
        }
        else if(i%5==0){
            printf("BUZZ\n");
        }
        else if(i%3==0 && i%5==0){
            printf("FIZZBUZZ\n");
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}