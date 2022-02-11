#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[80];
    int mphy;
	int mmath;
	int melec;
	int mpps;
	int mbs;
	int marks;
};
void accept(struct student[], int);
void display(struct student[], int);
void search(struct student[], int, int);
int findMax(struct student[], int);
void toppers(struct student[], int);
//void clrscr();

int main()
{	

    struct student data[20];
    int n,choice,rollno,dump;

    printf("Number of records you want to enter : ");
    scanf("%d", &n);
    accept(data,n);
    do
    {	
        printf("\nResult Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to display toppers name.\n");
        //printf("Press 4 to clear screen.\n");
        printf("Press 0 to exit.\n");
        printf("\nEnter Choice(0-3) : ");
        scanf("%d", &choice);
        system("cls");
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
            break;
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

        printf("Enter marks in Physics : ");
        scanf("%d", &list[i].mphy);
        printf("Enter marks in Mathematics : ");
        scanf("%d", &list[i].mmath);
        printf("Enter marks in Electrical : ");
        scanf("%d", &list[i].melec);
        printf("Enter marks in PPS : ");
        scanf("%d", &list[i].mpps);
        printf("Enter marks in Biological Science : ");
        scanf("%d", &list[i].mbs);
        
        list[i].marks = list[i].mphy + list[i].mmath + list[i].melec + list[i].mpps + list[i].mbs;
    }
}

void display(struct student list[80], int s)
{
    int i;
    printf("\t\t\tTHE MARKS OF THE STUDENTS OF SECTION ''H''\n\n\n");
    printf("\n\nRollno\tName\t\tPhysics\t\tMathematics\tElectrical\tPPS\t\tBio Science\tTotal Marks\n");
    for (i=0;i<s;i++)
    {
        printf("%d\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", list[i].rollno, list[i].name, list[i].mphy , list[i].mmath , list[i].melec , list[i].mpps , list[i].mbs , list[i].marks);
    }
}
void search(struct student list[80], int s, int number)
{
    int i;
    for(i=0;i<s;i++)
    {
        if (list[i].rollno == number)
        {
            printf("Rollno :\t\t %d\nName : \t\t\t%s\nPhysics : \t\t%d\nMathematics : \t\t%d\nElectrical : \t\t%d\nPPS : \t\t\t%d\nBio Science : \t\t%d\nTotal Marks : \t\t%d\n", list[i].rollno, list[i].name, list[i].mphy , list[i].mmath , list[i].melec , list[i].mpps , list[i].mbs, list[i].marks);
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
            printf("The name of the topper is : %s\n", list[i].name);
        }
    }
}
/*void clrscr()
{
    system("@cls||clear");
}
*/




