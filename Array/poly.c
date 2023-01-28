 #include<stdio.h>
 struct poly
 {
    int n;
   int coeff;
   int expo;
 };
 /* declare three arrays p1, p2, p3 of type structure poly.
 * each polynomial can have maximum of ten terms
 * addition result of p1 and p2 is stored in p3 */

 /* function prototypes */
 void readPoly(struct poly []);
 int addPoly(struct poly [],struct poly [],struct poly []);
 void displayPoly( struct poly [],int terms);

 int main()
 {
  int t1,t2,t3;
 struct poly p1[100],p2[100],p3[100];
  /* read and display first polynomial */
  t1=readPoly(p1);
  printf(" \n First polynomial : ");
  displayPoly(p1,t1);
  /* read and display second polynomial */
  t2=readPoly(p2);
  printf(" \n Second polynomial : ");
  displayPoly(p2,t2);

  /* add two polynomials and display resultant polynomial */
  t3=addPoly(p1,p2,t1,t2,p3);
  printf(" \n\n Resultant polynomial after addition : ");
  displayPoly(p3,t3);
  printf("\n");

  return 0;
 }

 void readPoly(struct poly p[])
 {
  int n,i;

  printf("\n\n Enter the maximum degree in the polynomial:");
  scanf("%d",&n);
  for(i=n;i>=0;i--)
  {
    printf("   Enter the Coefficient of degree %d : ",i+1);
    scanf("%d",&p[i].coeff);
    p[i].expo=i;        /* only statement in loop */
  }
 }

 int addPoly(struct poly p1[],struct poly p2[],struct poly p3[])
 {
  int i,j,k;


  i=0;
  j=0;
  k=0;

  while(i<t1 && j<t2)
  {
    if(p1[i].expo==p2[j].expo)
    {
      p3[k].coeff=p1[i].coeff + p2[j].coeff;
      p3[k].expo=p1[i].expo;

      i++;
      j++;
      k++;
    }
    else if(p1[i].expo>p2[j].expo)
    {
      p3[k].coeff=p1[i].coeff;
      p3[k].expo=p1[i].expo;
      i++;
      k++;
    }
    else
    {
      p3[k].coeff=p2[j].coeff;
      p3[k].expo=p2[j].expo;
      j++;
      k++;
    }
  }

  /* for rest over terms of polynomial 1 */
  while(i<t1)
  {
    p3[k].coeff=p1[i].coeff;
    p3[k].expo=p1[i].expo;
    i++;
    k++;
  }
  /* for rest over terms of polynomial 2 */
  while(j<t2)
  {
    p3[k].coeff=p2[j].coeff;
    p3[k].expo=p2[j].expo;
    j++;
    k++;
  }

  return(k); /* k is number of terms in resultant polynomial*/
 }

 void displayPoly(struct poly p[10],int term)
 {
  int k;

  for(k=0;k<term-1;k++)
  printf("%d(x^%d)+",p[k].coeff,p[k].expo);
  printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}
