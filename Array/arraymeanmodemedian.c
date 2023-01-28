//Odd even search in array
#include <stdio.h>
int main(){
    int i, n, even1, even2, j, odd1, odd2, ran1, ran2, y=0, ab, yn, inp, all, mean=0, count=0, mno=0, mnopq=0, check, xyz=0;
    float mean1;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    int a[n], co[n], arr[n];
    printf("Enter elements in array\n");                    //Enter elements in array
    for(i=0; i<n; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Array is : ");
    for(i=0; i<n; i++){                             //Print elements of array
            printf("%d ", a[i]);
    }
    printf("\n");
    while(mnopq==0){
        printf("Enter what to find : mean (1), mode(2), median(3)");
        scanf("%d", &inp);
        if(inp==1){
            while(mno==0){
                while(y==0){
                    printf("Which location you want to find : even (1) or odd(2) or mixed(3)");
                    scanf("%d", &ab);
                    int m=0;
                    if(ab==1){
                        printf("Starting even location for finding");
                        scanf("%d", &even1);                            //Enter starting location for even element
                        printf("Ending even location for finding");
                        scanf("%d", &even2);                            //Enter ending location for even element
                        if(even1<even2 && even2<n && even1%2==0 && even2%2==0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for even elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=even1; j<=even2; j=j+2){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    mean1=(float)(mean)/(float)(count);
                                    printf("Mean of range is : %f\n", mean1);
                                    z=1;
                                }
                                else if(all==2){
                                    for(j=even1; j<=even2; j++){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    mean1=(float) (mean)/(float)(count);
                                    printf("Mean of range is : %f\n", mean1);
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mean also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                            mno=1;
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==2){
                        printf("Starting odd location for finding");
                        scanf("%d", &odd1);                            //Enter starting location for odd element
                        printf("Ending odd location for finding");
                        scanf("%d", &odd2);                            //Enter ending location for odd element
                        if(odd1<odd2 && odd2<n && odd1%2!=0 && odd2%2!=0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for odd elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=odd1; j<=odd2; j=j+2){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    mean1=(float) (mean)/(float)(count);
                                    printf("Mean of range is : %f\n", mean1);
                                    z=1;
                                }
                                else if(all==2){
                                    for(j=odd1; j<=odd2; j++){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    mean1=(float) (mean)/(float)(count);
                                    printf("Mean of range is : %f\n", mean1);
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mean also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    while(xyz==0){
                                        printf("Do you want to do other operation : Y(1) or N(0)");
                                        scanf("%d", &check);
                                        if(check==0){
                                            mnopq=1;
                                            xyz=1;
                                        }
                                        else if(check==1){
                                            mnopq=0;
                                            xyz=1;
                                        }
                                        else{
                                            printf("Invalid input\n");
                                            xyz=0;
                                        }
                                    }
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==3){
                        printf("Starting location for finding");
                        scanf("%d", &ran1);                            //Enter starting location for element
                        printf("Ending location for finding");
                        scanf("%d", &ran2);                            //Enter ending location for element
                        if(ran1<ran2 && ran2<n){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for alternate elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=ran1; j<=ran2; j=j+2){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    if(ran2-ran1==1){
                                        printf("No mean");
                                    }
                                    else{
                                        mean1=(float) (mean)/(float)(count);
                                        printf("Mean of range is : %f\n", mean1);
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    for(j=ran1; j<=ran2; j++){
                                        mean=mean+a[j];
                                        count++;
                                    }
                                    mean1=(float) (mean)/(float)(count);
                                    printf("Mean of range is : %f\n", mean1);
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mean also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                }
            }
        }
        if(inp==2){
            while(mno==0){
                while(y==0){
                    printf("Which location you want to find : even (1) or odd(2) or mixed(3)");
                    scanf("%d", &ab);
                    int m=0;
                    if(ab==1){
                        printf("Starting even location for finding");
                        scanf("%d", &even1);                            //Enter starting location for even element
                        printf("Ending even location for finding");
                        scanf("%d", &even2);                            //Enter ending location for even element
                        if(even1<even2 && even2<n && even1%2==0 && even2%2==0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for even elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    int ma;
                                    for(int j=even1, l=0; j<=even2, l<=((even2-even1+1)/2); j=j+2, l++){
                                        int count1=0;
                                        for(int k=j; k<=even2; k=k+2){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<=((even2-even1+1)/2); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<((even2-even1+1)/2); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=2*l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[even1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    int ma;
                                    for(int j=even1, l=0; j<=even2, l<(even2-even1+1); j++, l++){
                                        int count1=0;
                                        for(int k=j; k<=even2; k++){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<(even2-even1+1); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<(even2-even1+1); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[even1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mode also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                            mno=1;
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==2){
                        printf("Starting odd location for finding");
                        scanf("%d", &odd1);                            //Enter starting location for odd element
                        printf("Ending odd location for finding");
                        scanf("%d", &odd2);                            //Enter ending location for odd element
                        if(odd1<odd2 && odd2<n && odd1%2!=0 && odd2%2!=0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for even elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    int ma;
                                    for(int j=odd1, l=0; j<=odd2, l<=((odd2-odd1+1)/2); j=j+2, l++){
                                        int count1=0;
                                        for(int k=j; k<=odd2; k=k+2){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<=((odd2-odd1+1)/2); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<((odd2-odd1+1)/2); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=2*l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[odd1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    int ma;
                                    for(int j=odd1, l=0; j<=odd2, l<(odd2-odd1+1); j++, l++){
                                        int count1=0;
                                        for(int k=j; k<=odd2; k++){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<(odd2-odd1+1); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<(odd2-odd1+1); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[odd1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mode also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==3){
                        printf("Starting location for finding");
                        scanf("%d", &ran1);                            //Enter starting location for element
                        printf("Ending location for finding");
                        scanf("%d", &ran2);                            //Enter ending location for element
                        if(ran1<ran2 && ran2<n){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    int ma;
                                    for(int j=ran1, l=0; j<=ran2, l<=((ran2-ran1+1)/2); j=j+2, l++){
                                        int count1=0;
                                        for(int k=j; k<=ran2; k=k+2){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<=((ran2-ran1+1)/2); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<((ran2-ran1+1)/2); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=2*l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[ran1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    int ma;
                                    for(int j=ran1, l=0; j<=ran2, l<(ran2-ran1+1); j++, l++){
                                        int count1=0;
                                        for(int k=j; k<=ran2; k++){
                                            if(j!=k){
                                                if(a[j]==a[k]){
                                                    count1++;
                                                }
                                            }
                                        }
                                        co[l]=count1;
                                    }
                                    for(int l=0; l<(ran2-ran1+1); l++){
                                        int abc=0;                                    //rejecting small values
                                        for(int f=0; f<(ran2-ran1+1); f++){
                                            if(l!=f){
                                                if(co[l]<co[f]){
                                                    abc=1;
                                                }
                                            }    
                                        }
                                        if(abc==0){
                                            ma=l;
                                            if(co[l]>0){
                                            printf("Mode of given range is : %d\n", a[ran1+ma]);
                                            }
                                            else if(co[l]==0){
                                                printf("No mode\n");
                                                break;
                                            }
                                        }
                                    }
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other mode also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                            mno=1;
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                }
            }
        }
        if(inp==3){
            while(mno==0){
                while(y==0){
                    printf("Which location you want to find : even (1) or odd(2) or mixed(3)");
                    scanf("%d", &ab);
                    int m=0;
                    for(j=0; j<n; j++){
                        arr[j]=a[j];
                    }
                    for(j=0; j<n; j++){
                        for(int k=j+1; k<n; ++k){
                            if(arr[j]>arr[k]){
                                int mnop=arr[j];
                                arr[j]=arr[k];
                                arr[k]=mnop;
                            }
                        }
                    }
                    if(ab==1){
                        printf("Starting even location for finding");
                        scanf("%d", &even1);                            //Enter starting location for even element
                        printf("Ending even location for finding");
                        scanf("%d", &even2);                            //Enter ending location for even element
                        if(even1<even2 && even2<n && even1%2==0 && even2%2==0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for even elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=even1; j<=even2; j=j+2){
                                        count++;
                                    }
                                    if(count%2==0 && even2-even1!=2){
                                        printf("Median of range is : %d and %d\n", arr[(even1)+(((even2-even1)/2)-1)], arr[(even1)+(((even2-even1)/2)+1)]);
                                    }
                                    else if(count%2==0 && even2-even1==2){
                                        printf("No median\n");
                                    }
                                    else{
                                        printf("Median of range is : %d\n", arr[(even1)+((even2-even1)/2)]);
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    printf("Median of range is : %d\n", arr[(even1)+((even2-even1)/2)]);
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other median also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                            mno=1;
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==2){
                        printf("Starting odd location for finding");
                        scanf("%d", &odd1);                            //Enter starting location for odd element
                        printf("Ending odd location for finding");
                        scanf("%d", &odd2);                            //Enter ending location for odd element
                        if(odd1<odd2 && odd2<n && odd1%2!=0 && odd2%2!=0){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for odd elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=odd1; j<=odd2; j=j+2){
                                        count++;
                                    }
                                    if(count%2==0){
                                        printf("Median of range is : %d and %d\n", arr[(odd1)+(((odd2-odd1)/2)-1)], arr[(odd1)+(((odd2-odd1)/2)+1)]);
                                    }
                                    else if(count%2==0 && odd2-odd1==2){
                                        printf("No median\n");
                                    }
                                    else{
                                        printf("Median of range is : %d\n", arr[(odd1)+((odd2-odd1)/2)]);
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    printf("Median of range is : %d\n", arr[(odd1)+((odd2-odd1)/2)]);
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other median also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                    else if(ab==3){
                        printf("Starting location for finding");
                        scanf("%d", &ran1);                            //Enter starting location for element
                        printf("Ending location for finding");
                        scanf("%d", &ran2);                            //Enter ending location for element
                        if(ran1<ran2 && ran2<n){
                            int z=0;
                            while(z==0){
                                printf("Only want to find condition for alternate elements between location(1) or for all locations between range(2)");
                                scanf("%d", &all);
                                if(all==1){
                                    for(j=ran1; j<=ran2; j=j+2){
                                        count++;
                                    }
                                    if(count%2==0 && ran2-ran1!=2 && ran2-ran1!=1 && ran2-ran1!=3){
                                        printf("Median of range is : %d\n", (((arr[(ran1)+(((ran2-ran1)/2)-1)])+(arr[(ran1)+(((ran2-ran1)/2)+1)]))/2));
                                    }
                                    else if(count%2==0 && ran2-ran1==2 || ran2-ran1==1 || ran2-ran1==3){
                                        printf("No median\n");
                                    }
                                    else if(count==1){
                                        printf("No median\n");
                                    }
                                    else{
                                        printf("Median of range is : %d\n", arr[(ran1)+((ran2-ran1)/2)]);
                                    }
                                    z=1;
                                }
                                else if(all==2){
                                    if(ran2-ran1==1){
                                        printf("Median of range is : %d\n", (((arr[ran1])+(arr[ran2]))/2));
                                    }
                                    else{
                                        printf("Median of range is : %d\n", arr[(ran1)+((ran2-ran1)/2)]);
                                    }
                                    z=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    z=0;
                                }
                            }
                            while(m==0){
                                printf("Do you want to find other median also : Y(1) or N(0)");      //Asking for further process
                                scanf("%d", &yn);
                                if(yn==1){
                                    y=0;
                                    m=1;
                                }
                                else if(yn==0){
                                    y=1;
                                    m=1;
                                    mno=1;
                                }
                                else{
                                    printf("Invalid input\n");
                                    m=0;
                                }
                            }
                        }
                        else{
                            printf("Invalid input\n");
                            mno=0;
                        }
                    }
                }
            }
        }
        else{
            printf("Invalid input\n");
            mnopq=0;
        }
    }
    return 0;
}