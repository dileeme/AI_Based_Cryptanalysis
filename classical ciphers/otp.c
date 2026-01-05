#include<stdio.h>
#include<string.h>

int main(){
char t[]="PARKTHECARATAARDVARKYARD";
char k[]="XMCKLXMCKLXMCKLXMCKLXM";
int i;
for(i=0;i<strlen(t);i++)printf("%c",(t[i]-'A'+k[i]-'A')%26+'A');
}

