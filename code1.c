#include<stdio.h>
int main(){
	char c;
	c=getchar();
	((c=='a')||(c=='A')||(c=='e')||(c=='E')||(c=='i')||(c=='I')||(c=='o')||(c=='O')||(c=='U')||(c=='u'))?printf("Vowel"):printf("Consonant");
	return 0;
}