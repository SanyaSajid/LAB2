#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
//QUESTION NO.1:
//FOR LOOP:
/*int main()
{
  int num;
  int sum=0;
  printf("Enter how many no you want to print: ");
  scanf("%d",&num);
  for (int i=0;i<=2*num;i++){
      if(i%2!=0){
          printf("%d\n",i);
          sum+=i;
      }
  }
  printf("sum: %d\n",sum);
    return 0;
}*/

//WHILE LOOP:
/*int main ()
{
    int n;
    int sum=0;
    printf("Enter the number how many times you want to print: ");
    scanf("%d",&n);
    int i = 0;
    while (1)
     {
        if(i==(2*n)){
            break;
        }
        else
            {
              if(i%2!=0){
               sum+=i;
               printf("%d\n",i);
            }
        }
        i++;

     }

    printf("sum:%d",sum);
    return 0;
}*/

//DO-WHILE LOOP:
/*t main ()
{
    int n;
    int sum=0;
    printf("Enter the number how many times you want to print: ");
    scanf("%d",&n);
    int i = 0;
    do {
        if(i==(2*n)){
            break;
        }
        else
            {
              if(i%2!=0){
               sum+=i;
               printf("%d\n",i);
            }
        }
        i++;
    }
    while (1);

    printf("sum:%d",sum);
    return 0;
}*/
//QUESTION NO.2:
/*int main ()
{
    int num;
    printf("enter how many times you want to print: ");
    scanf("%d:",&num);
    for (int i=1;i<=num;i++){
        for (int j=i;j<num;j++) {
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

//QUESTION NO.3:
/*int main ()
{
    char st1[50];
    char st2[50];
    int count1=0;
    int count2=0;

    printf("enter a string: ");
    scanf("%s",st1);
    printf("enter another string: ");
    scanf("%s",st2);
    for (int i=0;st1[i]!='\0';i++){
        count1+=1;
    }
    for (int j=0;st2[j]!='\0';j++){
            count2+=1;
    }
    if(count1==count2){
        printf("they are equal");
    }
    else
    {
        printf("unequal");
    }
    return 0;
}
*/
//QUESTION NO.4:
/*int main ()
{
    char st[50];
    printf("enter a string: ");
    scanf("%s",st);
    printf("The sentence is: %s\n",st);
    for (int i=0;st[i]!='\0';i++){
        if (isupper(st[i])!=0){
            st[i]=tolower(st[i]);
        }
        else if (islower(st[i])!=0){
            st[i]=toupper(st[i]);
        }
    }
    printf("your modified sentence is:%s\n",st);
    return 0;
}
*/
//QUESTION NO.5:
/*int main() {
    char wlist[50];
    char unique[50];
    int count;
    int c = 0;

    printf("Type any word: ");
    scanf("%s", wlist);

    for (int i = 0; i < strlen(wlist); i++) {
        count = 0;
        for (int j = 0; j < strlen(wlist); j++) {
            if (wlist[i] == wlist[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            unique[c] = wlist[i];
            c++;
        }
    }
    unique[c] = '\0';

    printf("unique array:%s", unique);

    return 0;
}
*/
//QUESTION NO.6:
/*struct Dist{
        float inch;
        float feet;
    };
    void addDis(float a,float b,float c,float d){
        if (b+d>12.00){
            float e=12.00;
            float h=(b+d)/12.00;
            float f=fmod(b+d,e);
            printf("Total distance is: %.2f feets %.2f inches ",(a+c)+h,f);
        }
        else{
            printf("Total distance is: %.2f feets %.2f inches ",a+c,b+d);
        }


    }

int main(){
    struct Dist dis1,dis2;
    printf("Enter distance of first obj as feet inch:");
    scanf("%f %f",&dis1.feet,&dis1.inch);
    printf("Enter distance of second obj as feet inch:");
    scanf("%f %f",&dis2.feet,&dis2.inch);
    addDis(dis1.feet,dis1.inch,dis2.feet,dis2.inch);
    return 0;

}*/
