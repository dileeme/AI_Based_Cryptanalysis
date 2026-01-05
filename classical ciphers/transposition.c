#include<stdio.h>
#include<string.h>

int main(){
char t[]="PARKTHECARATAARDVARKYARD";
int k=4,i,j,l=strlen(t);
for(i=0;i<k;i++)for(j=i;j<l;j+=k)printf("%c",t[j]); }
