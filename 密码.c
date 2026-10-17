#include <stdio.h>
int main(){
  char a[100];
  int m;
  do{
  printf("请输入字母：\n");
  scanf("%99s", a);
  printf("请输入数字：\n");
  scanf("%d", &m);
  int n=0;
  for (int i = 0; a[i] != '\0'; i++){
  if((a[i]>='A')&&( a[i]<='Z')){
    if(a[i]+m>90){
        int s=a[i]+m-26;
         printf("%c\n", s);
         }else if(a[i]+m<65){
           int j=a[i]+m+26;
           printf("%c\n",j);
           }else {printf("%c\n", a[i]+m);}}
           else if((a[i]>='a')&&( a[i]<='z')){
    if(a[i]+m>122){
        int p=a[i]+m-26;
         printf("%c\n", p);
         }else if(a[i]+m<97){
           int q=a[i]+m+26;
           printf("%c\n",q);
           }else {printf("%c\n", a[i]+m);
           }

  }}


  }while(scanf("%c", a)!=EOF);
return 0;
}
