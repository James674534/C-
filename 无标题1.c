#include<stdio.h>
long long step=0;
void hannuota(int n,char A,char B, char C){
   if(n==1){
    printf("%c->%c\n", A, B);
    step++;
    return ;
   }
   hannuota( n-1, A, C, B);
   printf ("%c->%c\n",A , B);
   step++;
   hannuota(n-1, C, B, A );
}
int main(){
   int n;
   printf("请输入圆盘数:");
   if(scanf("%d", &n)!=1||n<=0){
        printf("请输入大于0的整数");

    return 1;
   } printf("移动步骤：\n");
    hannuota(n, 'A', 'C', 'B');
    printf("总步数：%lld\n", step);
    return 0;
}


