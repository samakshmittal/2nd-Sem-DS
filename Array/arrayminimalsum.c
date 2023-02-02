#include <stdio.h>
int main(){
    int n, i, j, c, b;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(n==1){
        printf("Invalid input");
    }
    else{
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++){
                b=a[i]+a[j];
                if(c<b)
                {
                    continue;
                }
                else
                {
                    c=b;
                }
            }
        }
        printf("%d", c);
    }
    return 0;
}