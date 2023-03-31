   int x=strlen(source);
    source[x]=')';
    x++;
    int ub=x-1;
    while(ub>=0){
        source[ub+1]=source[ub];
        ub--;
    }
    source[0]='(';