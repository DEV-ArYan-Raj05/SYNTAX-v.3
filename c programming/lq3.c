#include<stdio.h>
int main (){
    int a[99],n,s,found,pos;
    found=0;
    printf("no of elements'n' you want in array\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
     //   printf("%d\n",a[i]);
    }
    printf("enter element of array you want to be searched\n");
    scanf("%d",&s);
    for(int j =0;j<=n;j++)
    {
        if (a[j] == s){
            found = found+1;
            pos = j;
        }
    }
    if(found>0){
        printf("element found at %d\n",pos);
    }
    else printf("not found\n");

return 0;
}