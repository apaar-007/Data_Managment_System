#include<stdio.h>
#include<time.h>

int Data(int n);
void reuse();
 FILE *ptr;

struct Students{
    int id;
    int marks;
    char name[20];
};

int main(){
    time_t t;
    time(&t);
    ptr = fopen("CodetoContribute.txt","a");
    fprintf(ptr,"These entries has been written at (date and time): %s \n", ctime(&t));
    reuse();
}
void reuse(){
    int num;
    printf("---------DATABASES MANAGEMENT SYSTEM--------- \n");
    printf("Press 1 to Continue and 0 to Exit \n");
    scanf("%d",&num);
    if(num == 1)
        Data(num);
    else
        printf("Thank You ");
}

int Data(int num){

    struct Students Class10[20];
    FILE *ptr;
    ptr = fopen("CodetoContribute.txt","a");
    int i, no_of_entry;

    printf("Please Enter the no. of Entries to be Stored \n");
    scanf("%d", &no_of_entry);

        for (i = 1; i <= no_of_entry; i++) {

            printf("Enter the id of %d Student \n", i);
            scanf("%d", &Class10[i].id);
            fprintf(ptr, "\tId - %d \n", Class10[i].id);

            printf("Enter the name of %d Student \n", i);
            scanf("%[^\n]",&Class10[i].name);

            fprintf(ptr, "\tName - %s \n", Class10[i].name);

            printf("Enter the marks of %d Student \n", i);
            scanf("%d", &Class10[i].marks);
            fprintf(ptr, "\tMarks - %d \n", Class10[i].marks);

            fprintf(ptr,"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n ");
            printf("-------------------------------- \n ");
        }
    reuse();
    return 0;
}

