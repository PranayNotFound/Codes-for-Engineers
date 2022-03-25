#include<stdio.h>
#include<string.h>
struct marksheet
{
    long int roll_no;
    char name[30];
    char mname[30];
    char fname[30];
    int tmark[100];
    char sname[50];
    int pmark[100];
};
void accept(struct marksheet[],int);
void display(struct marksheet[],int);
void search(struct marksheet[],int,int);
void topper(struct marksheet[],int);
float percentage(struct marksheet[],int);
void grade(struct marksheet[],int,int);
void status(struct marksheet[],int);
void numtoalpha(struct marksheet[],int,int);
int main()
{
    struct marksheet data[100];
    int n,choice,roll;
    printf("enter number of records\n");
    scanf("%d",&n);
    accept(data,n);
    do
    {
        printf("RESULT MENU\n");
        printf("press 1 to display all records\n");
        printf("press 2 to search a record\n");
        printf("press 3 to display toppers name\n");
        printf("press 0 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                display(data,n);
                break;
            }
            case 2:
            {
                printf("enter roll number to search:\n");
                scanf("%d",&roll);
                search(data,n,roll);
                break;
            }
            case 3:
            {
                topper(data,n);
                break;
            }
        }
    }
    while(choice!=0);
    return 0;
}
void accept(struct marksheet list[100],int s)
{
    int i;
    for(i=1;i<=s;i++)
    {
        printf("enter data for record %d\n",i);
        printf("enter roll number:\n");
        scanf("%d",&list[i].roll_no);
        fflush(stdin);
        printf("enter name:\n");
        gets(list[i].name);
        fflush(stdin);
        printf("enter mother's name:\n");
        gets(list[i].mname);
        fflush(stdin);
        printf("enter father's name:\n");
        gets(list[i].fname);
        fflush(stdin);
        printf("enter school code and school name:\n");
        gets(list[i].sname);
        printf("enter english core marks\n");
        scanf("%d",&list[i].tmark[0]);
        printf("enter mathematics marks\n");
        scanf("%d",&list[i].tmark[1]);
        printf("enter physics marks\n");
        scanf("%d",&list[i].tmark[2]);
        printf("enter chemistry marks\n");
        scanf("%d",&list[i].tmark[3]);
        printf("enter computer science marks\n");
        scanf("%d",&list[i].tmark[4]);
        printf("enter physical education marks\n");
        scanf("%d",&list[i].tmark[5]);
        printf("enter english practical marks\n");
        scanf("%d",&list[i].pmark[0]);
        printf("enter mathematics practical marks\n");
        scanf("%d",&list[i].pmark[1]);
        printf("enter physics practical marks\n");
        scanf("%d",&list[i].pmark[2]);
        printf("enter chemistry practical marks\n");
        scanf("%d",&list[i].pmark[3]);
        printf("enter computer science practical marks\n");
        scanf("%d",&list[i].pmark[4]);
        printf("enter physical education practical marks\n");
        scanf("%d",&list[i].pmark[5]);
    }
}
void display(struct marksheet list[100],int s)
{
    int i;
    for(i=1;i<=s;i++)
    {
        printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
        printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
        printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
        printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
        printf("This is to certify that   %s\n\n",list[i].name);
        printf("ROLL NO.                  %d\n\n",list[i].roll_no);
        printf("Mother's Name             %s\n\n",list[i].mname);
        printf("Father's/Guardian's Name  %s\n\n",list[i].fname);
        printf("School                    %s\n\n",list[i].sname);
        printf("has achieved scholastic achievements as under:\n\n");
        printf("_________________________________________________________________________________________________________________________________________________\n");
        printf("|         |                                      |                                                                   |                          |\n");
        printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
        printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
        printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[0],list[i].pmark[0],list[i].tmark[0]+list[i].pmark[0]);
        numtoalpha(list,i,0);
        grade(list,i,0);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[1],list[i].pmark[1],list[i].tmark[1]+list[i].pmark[1]);
        numtoalpha(list,i,1);
        grade(list,i,1);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[2],list[i].pmark[2],list[i].tmark[2]+list[i].pmark[2]);
        numtoalpha(list,i,2);
        grade(list,i,2);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[3],list[i].pmark[3],list[i].tmark[3]+list[i].pmark[3]);
        numtoalpha(list,i,3);
        grade(list,i,3);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[4],list[i].pmark[4],list[i].tmark[4]+list[i].pmark[4]);
        numtoalpha(list,i,4);
        grade(list,i,4);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[5],list[i].pmark[5],list[i].tmark[5]+list[i].pmark[5]);
        numtoalpha(list,i,5);
        grade(list,i,5);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
        printf("Abbreviations                                                                                                        Result");
        status(list,i);
        printf("\n");        
        printf("AB: Absent\n");
        printf("IA: Internal Assessment\n");
        printf("/PR: /practical\n");
        printf("ER: Essential Repeat in all subjects\n\n\n");
        printf("Delhi\n");
        printf("Dated: 30-07-2021                                                                                                    Controller of Examinations\n");
        printf("________________________________________________________________________________________________________________________________________________\n");
        printf("Co-Scholastic achievements: Grading for Co-scholastics and Discipline area is being issued by the school as per format prescribed by the board.\n");
        printf("In the changed subject code, the test result is given under 100 marks\n");
    }

}
float percentage(struct marksheet list[100],int j)
{
    float p;
    p=((list[j].tmark[0]+list[j].tmark[1]+list[j].tmark[2]+list[j].tmark[3]+list[j].tmark[4]+list[j].tmark[5]+list[j].pmark[0]+list[j].pmark[1]+list[j].pmark[2]+list[j].pmark[3]+list[j].pmark[4]+list[j].pmark[5])/5);
    return p;
}
void grade(struct marksheet list[100],int j,int k)
{
    int total;
    total=((list[j].tmark[k]+list[j].pmark[k]));
    if (total<=100&&total>=91)
    printf("       |           A1             |\n");
    if (total<=90&&total>=81)
    printf("       |           A2             |\n");
    if (total<=80&&total>=71)
    printf("       |           B1             |\n");
    if (total<=70&&total>=61)
    printf("       |           B2             |\n");
    if (total<=60&&total>=51)
    printf("       |           C1             |\n");
    if (total<=50&&total>=41)
    printf("       |           C2             |\n");
    if (total<=40&&total>=31)
    printf("       |           D1             |\n");
    if (total<=30&&total>=21)
    printf("       |           D2             |\n");
    if (total<=20&&total>=11)
    printf("       |           E              |\n");
    if (total<=10&&total>=0)
    printf("       |           F              |\n");
}
void status(struct marksheet list[100],int j)
{
    int p=percentage(list,j);
    if(p>=33)
    printf("\tPass");
    else
    printf("\tFail");
}
void search(struct marksheet list[100],int s,int r)
{
    int n=1,p,i=0;
    while(n<=s)
    {
        if(list[n].roll_no==r)
        i=n;
        n++;
    }
    if(i!=0)
    {
        printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
        printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
        printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
        printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
        printf("This is to certify that   %s\n\n",list[i].name);
        printf("ROLL NO.                  %d\n\n",list[i].roll_no);
        printf("Mother's Name             %s\n\n",list[i].mname);
        printf("Father's/Guardian's Name  %s\n\n",list[i].fname);
        printf("School                    %s\n\n",list[i].sname);
        printf("has achieved scholastic achievements as under:\n\n");
        printf("_________________________________________________________________________________________________________________________________________________\n");
        printf("|         |                                      |                                                                   |                          |\n");
        printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
        printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
        printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[0],list[i].pmark[0],list[i].tmark[0]+list[i].pmark[0]);
        numtoalpha(list,i,0);
        grade(list,i,0);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[1],list[i].pmark[1],list[i].tmark[1]+list[i].pmark[1]);
        numtoalpha(list,i,1);
        grade(list,i,1);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[2],list[i].pmark[2],list[i].tmark[2]+list[i].pmark[2]);
        numtoalpha(list,i,2);
        grade(list,i,2);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[3],list[i].pmark[3],list[i].tmark[3]+list[i].pmark[3]);
        numtoalpha(list,i,3);
        grade(list,i,3);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[4],list[i].pmark[4],list[i].tmark[4]+list[i].pmark[4]);
        numtoalpha(list,i,4);
        grade(list,i,4);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[5],list[i].pmark[5],list[i].tmark[5]+list[i].pmark[5]);
        numtoalpha(list,i,5);
        grade(list,i,5);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
        printf("Abbreviations                                                                                                        Result");
        status(list,i);
        printf("\n");        
        printf("AB: Absent\n");
        printf("IA: Internal Assessment\n");
        printf("/PR: /practical\n");
        printf("ER: Essential Repeat in all subjects\n\n\n");
        printf("Delhi\n");
        printf("Dated: 30-07-2021                                                                                                    Controller of Examinations\n");
        printf("________________________________________________________________________________________________________________________________________________\n");
        printf("Co-Scholastic achievements: Grading for Co-scholastics and Discipline area is being issued by the school as per format prescribed by the board.\n");
        printf("In the changed subject code, the test result is given under 100 marks\n");
    }
    else
    printf("No records found\n");   
}
void topper(struct marksheet list[100],int s)
{
    int i,t[100],max,n,p,len;
    for(i=1;i<=s;i++)
    {
        t[i]=percentage(list,i);
    }
    max=0;
    for(i=1;i<=s;i++)
    {
        if(t[i]>max)
        {
            max=t[i];
        }
    }
    for(i=1;i<=s;i++)
    {
        if(t[i]==max)
        {
            printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
            printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
            printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
            printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
            printf("This is to certify that   %s\n\n",list[i].name);
            printf("ROLL NO.                  %d\n\n",list[i].roll_no);
            printf("Mother's Name             %s\n\n",list[i].mname);
            printf("Father's/Guardian's Name  %s\n\n",list[i].fname);
            printf("School                    %s\n\n",list[i].sname);
            printf("has achieved scholastic achievements as under:\n\n");
            printf("_________________________________________________________________________________________________________________________________________________\n");
            printf("|         |                                      |                                                                   |                          |\n");
            printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
            printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
            printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[0],list[i].pmark[0],list[i].tmark[0]+list[i].pmark[0]);
            numtoalpha(list,i,0);
            grade(list,i,0);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[1],list[i].pmark[1],list[i].tmark[1]+list[i].pmark[1]);
            numtoalpha(list,i,1);
            grade(list,i,1);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[2],list[i].pmark[2],list[i].tmark[2]+list[i].pmark[2]);
            numtoalpha(list,i,2);
            grade(list,i,2);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[3],list[i].pmark[3],list[i].tmark[3]+list[i].pmark[3]);
            numtoalpha(list,i,3);
            grade(list,i,3);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[4],list[i].pmark[4],list[i].tmark[4]+list[i].pmark[4]);
            numtoalpha(list,i,4);
            grade(list,i,4);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",list[i].tmark[5],list[i].pmark[5],list[i].tmark[5]+list[i].pmark[5]);
            numtoalpha(list,i,5);
            grade(list,i,5);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
            printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
            printf("Abbreviations                                                                                                        Result");
            status(list,i);
            printf("\n");        
            printf("AB: Absent\n");
            printf("IA: Internal Assessment\n");
            printf("/PR: /practical\n");
            printf("ER: Essential Repeat in all subjects\n\n\n");
            printf("Delhi\n");
            printf("Dated: 30-07-2021                                                                                                    Controller of Examinations\n");
            printf("________________________________________________________________________________________________________________________________________________\n");
            printf("Co-Scholastic achievements: Grading for Co-scholastics and Discipline area is being issued by the school as per format prescribed by the board.\n");
            printf("In the changed subject code, the test result is given under 100 marks\n");
        }
    }
}
void numtoalpha(struct marksheet list[100],int j,int k)
{
    int n,m,r=0,a;
    n=list[j].tmark[k]+list[j].pmark[k];
    while(n>0)
    {
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    while(r>0)
    {
        m=r%10;
        if(m==1)
        printf(" One");
        else
        if(m==2)
        printf(" Two");
        else
        if(m==3)
        printf(" Three");
        else
        if(m==4)
        printf(" four");
        else
        if(m==5)
        printf(" five");
        else
        if(m==6)
        printf(" six");
        else
        if(m==7)
        printf(" seven");
        else
        if(m==8)
        printf(" eight");
        else
        printf(" nine");
        r=r/10;
    }
}