#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char String[1000];
int check(char *str){
    int i,ldiv2,n,f=0;
    for(i=0;str[i]!='\n'&&str[i]!='\0';i++);
    ldiv2 = i/2;
    n = i-1;
    for(i=0;i<ldiv2;i++){
        if(str[i]!=str[n-i])f=1;
    }
    return f;
}
int main(){
    String input;
    while(fgets(input,1000,stdin)!=NULL){
        if(check(input)){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
    return 0;
}