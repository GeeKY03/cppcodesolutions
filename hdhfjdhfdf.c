#define _CRT_SECURE_NO_WARNINGS
#define BOOK_NUM  4
#define NAME_LENGTH 200
#define AVAILABLE 10
#define NOT_AVAILABLE 20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book
{
    char name[NAME_LENGTH];  char author[NAME_LENGTH];  int available;  int times_borrowed;
}Book;

int main()
{
    Book *books[BOOK_NUM] = { 0 };
    char book_name[NAME_LENGTH];
    char author_name[NAME_LENGTH];
    int opreation = 0;
    int i;
    int j = 0;
    int m = 0;
    char tav;
    scanf("%d", &opreation);
    if (opreation == 1) {
        printf("please enter the name:");
        scanf("%c", &tav);
        do {// kelet of the book_name
            scanf("%c", &tav);
            if (tav == '\n')
                break;
            book_name[m] = tav;
            m++;
        } while (m < NAME_LENGTH);
        book_name[m] = '\0';
        for (i = 0; i < BOOK_NUM && *(books+i)!=NULL ; i++) {
            if (strcmp(books[i]->name, book_name) == 0)
            {
                if (books[i]->available == NOT_AVAILABLE)
                {
                    books[i]->available = AVAILABLE;
                    printf("This book is already in the library");
                    return 0;
                }
                else
                {
                    printf("There is no enough space in the library");
                    return 0;
                }

            }
        }
             //befot bs eza 3ml sreka ghad 3la kolshe w ma tghyr eshe

      if (books[j] == NULL)
      {
          books[j] = (Book*)malloc(sizeof(Book));
      if (books[j] != NULL)
      {
          strcpy(books[j]->name, book_name);
          printf("Please enter author name:");
          m = 0;
          do {// kelet of the book_name
              scanf("%c", &tav);
              if (tav == '\n')
                  break;
              author_name[m] = tav;
              m++;
          } while (m < NAME_LENGTH);
          author_name[m] = '\0';
          strcpy(books[j]->author, author_name);
          books[j]->available = AVAILABLE;
          books[j]->times_borrowed = 0;
          printf("The book %s was successfully added!", book_name);
          return 0;
      }
      else
      {
              for (int k = 0; k < BOOK_NUM && books[k]!=NULL; k++) {
                  free(books[k]);
              }
              printf("NO MEMORY");
              return 1;
       }

      }

    }

 }