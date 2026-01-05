#include<stdio.h>
#include<string.h>

int k[2][2]={{9,4},{5,7}};

int main(){
char t[]="PARKTHECARATAARDVARKYARD";
int i;
for(i=0;i<strlen(t);i+=2){
int p1=t[i]-'A',p2=t[i+1]-'A';
int c1=(k[0][0]*p1+k[0][1]*p2)%26;
int c2=(k[1][0]*p1+k[1][1]*p2)%26;
printf("Encrypted pair: %c%c \n",c1+'A',c2+'A');
}
}

