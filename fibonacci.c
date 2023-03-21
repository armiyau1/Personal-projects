#include <stdio.h>
int main(){
    int i;
    int b=1;
    int a=0;
    int c;
    int num;
    printf("ENTER A NUMBER ");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        printf("The fibonacci series of the given number is %d\n",a);
    
     c=a+b;
     a=b;
     b=c;

}
    

return 0;
}