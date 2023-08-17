#include <stdio.h>
#include <math.h>
#include <string.h>

struct student{
    char name[100];
    int id;
    int jee_marks;
    float marks_12;
} s[100];

int count(int n){
    int digit = 0;
    while (n){
        int num = n % 10;
        n = n / 10;
        digit++;
    }
    return digit;
}

int main(){
    int n,a;
    printf("Enter the number of student\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Enter your name\n");
        scanf("%s", &s[i].name);

        printf("Enter your id\n");
        scanf("%d", &s[i].id);
        a = count(s[i].id);
        while(a != 5){
            printf("Re-Enter your id\n");
            scanf("%d", &s[i].id);
            a=count(s[i].id);
        }

        printf("Enter your jee_marks\n");
        scanf("%d", &s[i].jee_marks);
        
        while(s[i].jee_marks>300){
            printf("Re-Enter your jee marks\n");
            scanf("%d", &s[i].jee_marks);
        }

        printf("Enter your class 12 marks\n");
        scanf("%f", &s[i].marks_12);
        while(s[i].marks_12>100 || s[i].marks_12<0){
            printf("Re-Enter your class 12 marks\n");
            scanf("%f", &s[i].marks_12);
        }
        
    }
    printf("NAME \t\t\t id \t\t merit/non-merit\n");
    for (int i = 0; i < n; i++){
        if (s[i].jee_marks > 150 && s[i].marks_12 > 85){
            printf("%s\t\t\t%d\t\tmerit\n", s[i].name, s[i].id);
        }
        else{
            printf("%s\t\t\t%d\t\tnon-merit\n", s[i].name, s[i].id);
        }
    }
    return 0;
}