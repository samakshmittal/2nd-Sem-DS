#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the gretest");
    
        }
        else if(c>a){
            printf(" c is the greatest");
        }
        
        else{
        printf("Invalid");
        }
    
    }
    else if(b>a){
       if(b>c){
        printf("b is the greatest");

       }
       else if (c>b){
        printf("c is the greatest");
       }
       else{
        printf("Invalid");
       }
        
       }
    else{
        printf("Invalid");
    }
    
       return 0;
}