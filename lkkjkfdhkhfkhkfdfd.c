#include<stdio.h>
int main(){
	char a;
	a=getchar();
	(a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')?printf("Vowel"):printf("Consonant");
	return 0;
}