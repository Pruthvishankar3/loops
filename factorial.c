#include<stdio.h>
int main(){
    int n,res=1;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    printf("%d",res);
    return 0;
}
