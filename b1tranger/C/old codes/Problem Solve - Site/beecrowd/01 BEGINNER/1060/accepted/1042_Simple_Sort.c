#include <stdio.h>

int main() {
  int a,b,c;
  int s1,s2,s3;
  scanf("%d %d %d", &a, &b, &c);
  if (a<b){s1=a,s2=b;} else {s1=b,s2=a;}
  if (s2<c){s3=c;} else {s3=s2,s2=c;}
  if (s1<s2){printf("%d\n%d\n%d\n", s1,s2,s3);} else {printf("%d\n%d\n%d\n", s2,s1,s3);}
  
  printf("\n%d\n%d\n%d\n", a, b, c);
  return 0;
}


//ALTERNATIVE ---> "Eta Array diye o  kora jabe,ty kre dekho"



/*
//ALTERNATIVE ---> Niloy's Code

#include <stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

if((a<b)&&(a<c))
if(b<c)
printf("%d\n%d\n%d\n",a,b,c);
else{
printf("%d\n%d\n%d\n",a,c,b);}

if((b<c)&&(b<a))
if(a<c)
printf("%d\n%d\n%d\n",b,a,c);
else{
printf("%d\n%d\n%d\n",b,c,a);}

if((c<a)&&(c<b))
if(b<a)
printf("%d\n%d\n%d\n",c,b,a);
else{
printf("%d\n%d\n%d\n",c,a,b);}

printf("\n");
printf("%d\n%d\n%d\n",a,b,c);
return 0;
}

*/










/*Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.


Input Sample	
7 21 -14
Output Sample
-14
7
21

7
21
-14

*/