#include<stdio.h>
#include<string.h>

char m[5][5]={{'M','F','H','I','K'},{'U','N','O','P','Q'},{'Z','V','W','X','Y'},{'E','L','A','R','G'},{'D','S','T','B','C'}};
int r[26],c[26];

int main(){
char t[]="PARKTHECARATAARDVARKYARD";
int i,j;
for(i=0;i<5;i++)for(j=0;j<5;j++){r[m[i][j]-'A']=i;c[m[i][j]-'A']=j;}
for(i=0;i<strlen(t);i+=2){
int r1=r[t[i]-'A'],c1=c[t[i]-'A'],r2=r[t[i+1]-'A'],c2=c[t[i+1]-'A'];
if(r1==r2)printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
else if(c1==c2)printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
else printf("%c%c",m[r1][c2],m[r2][c1]);
}
}

