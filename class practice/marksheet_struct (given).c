#include<stdio.h>

struct student
{
    int rollno;
    char name[80];
    int marks;
};
void accept(struct student[], int);
void display(struct student[], int);
void search(struct student[], int, int);
int findMax(struct student[], int);
void toppers(struct student[], int);

int main()
{
    struct student data[20];
    int n,choice,rollno;

    printf("Number of records you want to enter : ");
    scanf("%d", &n);
    accept(data,n);
    do
    {
        printf("\nResult Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to display toppers name.\n");
        printf("Press 0 to exit.\n");
        printf("\nEnter Choice(0-3) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(data, n);
            break;
        case 2:
            printf("Enter roll number to search : ");
            scanf("%d", &rollno);
            search(data, n, rollno);
            break;
        case 3:
            toppers(data, n);
        }
    }
    while (choice!=0);
    return 0;
}
void accept(struct student list[80], int s)
{
    int i;
    for (i=0;i<s;i++)
    {
        printf("\nEnter data for record #%d", i+1);
        printf("\nEnter roll no : ");
        scanf("%d", &list[i].rollno);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);

        printf("Enter marks : ");
        scanf("%d", &list[i].marks);
    }
}

void display(struct student list[80], int s)
{
    int i;
    printf("\n\nRollno\tName\tMarks\n");
    for (i=0;i<s;i++)
    {
        printf("%d\t%s\t%d\n", list[i].rollno, list[i].name, list[i].marks);
    }
}
void search(struct student list[80], int s, int number)
{
    int i;
    for(i=0;i<s;i++)
    {
        if (list[i].rollno == number)
        {
            printf("Rollno : %d\nName : %s\nMarks : %d\n", list[i].rollno, list[i].name, list[i].marks);
            return;
        }
    }
    printf("Record not found\n");
}

int findMax(struct student list[], int s)
{
    int i, max;
    max=list[0].marks;
    for(i=1;i<s;i++)
    {
        if (list[i].marks >max)
        {
            max=list[i].marks;
        }
    }
    return max;
}
void toppers(struct student list[], int s)
{
    int i;
    for (i=0;i<s;i++)
    {
        if (list[i].marks == findMax(list, s))
        {
            printf("%s\n", list[i].name);
        }
    }
}





