#include <stdio.h>
#include <string.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d",&n);
    char str[n][5];

    char temp[50];
	char arr[]="abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
		    char nm=arr[rand()%26];
		    str[i][j]=nm;
		    printf("%c",nm);
	    }
	    printf("\n");
	}

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
        if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < n; ++i) {
      fputs(str[i] , stdout);
   }
   return 0;
}