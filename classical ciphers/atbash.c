#include<stdio.h>
#include<string.h>

int main(){
char t[]="PARKTHECARATAARDVARKYARD";
int i;
for(i=0;i<strlen(t);i++){
    printf("%c",'Z'-(t[i]-'A'));
}
}

