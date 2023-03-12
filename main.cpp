#include <iostream>
#include<stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char str[20] = "linguagem c";
char c;
int i, tam= strlen(str);
for(i=0; i<tam/2; i++){
c=str[i];
str[i]=str[tam-1-i];
str[tam-1-i]=c;

}
printf("str=%s\n",str);
system("pause");







	return 0;
}
