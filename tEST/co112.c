#include<stdio.h>
#include<string.h>
int main(){
    char num[1000];
    scanf("%s", &num);
    int count0=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, 
    count7=0, count8=0, count9=0;
    for(int i=0; num[i]!='\0'; i++){
    if(num[i]=='0'){
    count0++;
    }
    else if(num[i]=='1'){
    count1++;
    }
    else if(num[i]=='2'){
    count2++;
    }
    else if(num[i]=='3'){
    count3++;
    }
    else if(num[i]=='4'){
    count4++;
    }
    else if(num[i]=='5'){
    count5++;
    }
    else if(num[i]=='6'){
    count6++;
    }
    else if(num[i]=='7'){
    count7++;
    }
    else if(num[i]=='8'){
    count8++;
    }
    else if(num[i]=='9'){
    count9++;
    }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", count0, count1, count2, count3, 
    count4, count5, count6, count7, count8, count9);
    return 0;
}