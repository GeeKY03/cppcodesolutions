#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int sum=0;
struct student{
    char name[100];
    int id;
    int jee_marks;
    float marks_12;
} s[100];

void Name(char *name){
    int r = rand() % 6 + 1;
    for (int i = 0; i < r; i++){
        name[i] = rand() % 26 + 'a';
    }
}
int Rid(int id){
    for (int i = 0; i < 50; i++){
        s[i].id= rand() % 10000+10000;
    }
    
}
void Rjee(int jee_marks){
    for (int i = 0; i < 50; i++){
        s[i].jee_marks= rand()%300+1;
        sum+=s[i].jee_marks;
    }  
}
void R12(float marks_12){
    for (int i = 0; i < 50; i++){
        s[i].marks_12=rand()%100+1;
    }
    
}
float avg(float sum){
    return sum/50.0;
}
int main(){
	int n=50;

    srand(time(0));

    for (int i = 0; i < n; i++){
        Name(s[i].name);
        Rid(s[i].id);
        Rjee(s[i].jee_marks);
        R12(s[i].marks_12);
        
    }
    printf("NAME\tID\tScholarship/no-Scholarship\n");
    for (int i=0;i<n;i++){
        if (s[i].jee_marks>=200&&s[i].jee_marks<300&&s[i].marks_12>90){
            printf("%s\t %d \t100%%Scholarship\n",s[i].name,s[i].id);   
        }
        else if (s[i].jee_marks>100&&s[i].jee_marks<=199&&s[i].marks_12>=89.90){
            printf("%s\t %d \t50%%Scholarship\n",s[i].name,s[i].id);   
        }
        else{
            printf("%s\t %d \tno-Scholarship\n",s[i].name,s[i].id);
        }
    }
    printf("\nThe average jee score is : %.3f\n",avg(sum));

    return 0;
}