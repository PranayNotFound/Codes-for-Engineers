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
void display(struct marksheet[],struct marksheet[],int);
void search(struct marksheet[],struct marksheet[],int,int);
void topper(struct marksheet[],struct marksheet[],int);
float percentage(struct marksheet[],struct marksheet[],int);
void grade(struct marksheet[],struct marksheet[],int,int);
void status(struct marksheet[],struct marksheet[],int);
void numtoalpha(struct marksheet[],struct marksheet[],int,int);
int main()
{
    struct marksheet data[100];
    struct marksheet *ptr;
    ptr=&data[0];
    int n,choice,roll;
    printf("enter number of records\n");
    scanf("%d",&n);
    accept(ptr,n);
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
                display(ptr,data,n);
                break;
            }
            case 2:
            {
                printf("enter roll number to search:\n");
                scanf("%d",&roll);
                search(ptr,data,n,roll);
                break;
            }
            case 3:
            {
                topper(ptr,data,n);
                break;
            }
        }
    }
    while(choice!=0);
    return 0;
}
void accept(struct marksheet *ptr,int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        printf("enter data for record %d\n",i+1);
        printf("enter roll number:\n");
        scanf("%d",&ptr->roll_no);
        fflush(stdin);
        printf("enter name:\n");
        gets(ptr->name);
        fflush(stdin);
        printf("enter mother's name:\n");
        gets(ptr->mname);
        fflush(stdin);
        printf("enter father's name:\n");
        gets(ptr->fname);
        fflush(stdin);
        printf("enter school code and school name:\n");
        gets(ptr->sname);
        printf("enter english core marks\n");
        scanf("%d",&ptr->tmark[0]);
        printf("enter mathematics marks\n");
        scanf("%d",&ptr->tmark[1]);
        printf("enter physics marks\n");
        scanf("%d",&ptr->tmark[2]);
        printf("enter chemistry marks\n");
        scanf("%d",&ptr->tmark[3]);
        printf("enter computer science marks\n");
        scanf("%d",&ptr->tmark[4]);
        printf("enter physical education marks\n");
        scanf("%d",&ptr->tmark[5]);
        printf("enter english practical marks\n");
        scanf("%d",&ptr->pmark[0]);
        printf("enter mathematics practical marks\n");
        scanf("%d",&ptr->pmark[1]);
        printf("enter physics practical marks\n");
        scanf("%d",&ptr->pmark[2]);
        printf("enter chemistry practical marks\n");
        scanf("%d",&ptr->pmark[3]);
        printf("enter computer science practical marks\n");
        scanf("%d",&ptr->pmark[4]);
        printf("enter physical education practical marks\n");
        scanf("%d",&ptr->pmark[5]);
        ptr++;
    }
}
void display(struct marksheet *ptr,struct marksheet data[100],int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
        printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
        printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
        printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
        printf("This is to certify that   %s\n\n",ptr->name);
        printf("ROLL NO.                  %d\n\n",ptr->roll_no);
        printf("Mother's Name             %s\n\n",ptr->mname);
        printf("Father's/Guardian's Name  %s\n\n",ptr->fname);
        printf("School                    %s\n\n",ptr->sname);
        printf("has achieved scholastic achievements as under:\n\n");
        printf("_________________________________________________________________________________________________________________________________________________\n");
        printf("|         |                                      |                                                                   |                          |\n");
        printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
        printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
        printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[0],ptr->pmark[0],ptr->tmark[0]+ptr->pmark[0]);
        numtoalpha(data,ptr,i,0);
        grade(data,ptr,i,0);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[1],ptr->pmark[1],ptr->tmark[1]+ptr->pmark[1]);
        numtoalpha(data,ptr,i,1);
        grade(data,ptr,i,1);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[2],ptr->pmark[2],ptr->tmark[2]+ptr->pmark[2]);
        numtoalpha(data,ptr,i,2);
        grade(data,ptr,i,2);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[3],ptr->pmark[3],ptr->tmark[3]+ptr->pmark[3]);
        numtoalpha(data,ptr,i,3);
        grade(data,ptr,i,3);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[4],ptr->pmark[4],ptr->tmark[4]+ptr->pmark[4]);
        numtoalpha(data,ptr,i,4);
        grade(data,ptr,i,4);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[5],ptr->pmark[5],ptr->tmark[5]+ptr->pmark[5]);
        numtoalpha(data,ptr,i,5);
        grade(data,ptr,i,5);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
        printf("Abbreviations                                                                                                        Result");
        status(data,ptr,i);
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
        ptr++;
    }

}
void search(struct marksheet *ptr,struct marksheet data[100],int s,int r)
{
    int n=0,p,i;
    while(n<s)
    {
        if(data[n].roll_no==r)
        {
            i=n;
            ptr=&data[i];
        }
        n++;
    }
    if(i!=101)
    {
        printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
        printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
        printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
        printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
        printf("This is to certify that   %s\n\n",ptr->name);
        printf("ROLL NO.                  %d\n\n",ptr->roll_no);
        printf("Mother's Name             %s\n\n",ptr->mname);
        printf("Father's/Guardian's Name  %s\n\n",ptr->fname);
        printf("School                    %s\n\n",ptr->sname);
        printf("has achieved scholastic achievements as under:\n\n");
        printf("_________________________________________________________________________________________________________________________________________________\n");
        printf("|         |                                      |                                                                   |                          |\n");
        printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
        printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
        printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[0],ptr->pmark[0],ptr->tmark[0]+ptr->pmark[0]);
        numtoalpha(data,ptr,i,0);
        grade(data,ptr,i,0);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[1],ptr->pmark[1],ptr->tmark[1]+ptr->pmark[1]);
        numtoalpha(data,ptr,i,1);
        grade(data,ptr,i,1);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[2],ptr->pmark[2],ptr->tmark[2]+ptr->pmark[2]);
        numtoalpha(data,ptr,i,2);
        grade(data,ptr,i,2);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[3],ptr->pmark[3],ptr->tmark[3]+ptr->pmark[3]);
        numtoalpha(data,ptr,i,3);
        grade(data,ptr,i,3);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[4],ptr->pmark[4],ptr->tmark[4]+ptr->pmark[4]);
        numtoalpha(data,ptr,i,4);
        grade(data,ptr,i,4);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[5],ptr->pmark[5],ptr->tmark[5]+ptr->pmark[5]);
        numtoalpha(data,ptr,i,5);
        grade(data,ptr,i,5);
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
        printf("|         |                                      |          |               |             |                          |                          |\n");
        printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
        printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
        printf("Abbreviations                                                                                                        Result");
        status(data,ptr,i);
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
void topper(struct marksheet *ptr,struct marksheet data[100],int s)
{
    int i,t[100],max,n,p,len;
    for(i=0;i<s;i++)
    {
        t[i]=percentage(data,ptr,i);
    }
    max=0;
    for(i=0;i<s;i++)
    {
        if(t[i]>max)
        {
            max=t[i];
        }
    }
    for(i=0;i<s;i++)
    {
        if(t[i]==max)
        {
            ptr=&data[i];
            printf("S.NO.SSCE/2021  1305192                                                                                                   Regn.No. P221/69524/0012\n\n\n\n\n");
            printf("                                                     CENTRAL BOARD OF SECONDARY EDUCATION\n");
            printf("                                                       MARKS STATEMENT CUM CERTIFICATE\n");
            printf("                                                   SENIOR SCHOOL CERTIFICATE EXAMINATION,2021\n\n");
            printf("This is to certify that   %s\n\n",ptr->name);
            printf("ROLL NO.                  %d\n\n",ptr->roll_no);
            printf("Mother's Name             %s\n\n",ptr->mname);
            printf("Father's/Guardian's Name  %s\n\n",ptr->fname);
            printf("School                    %s\n\n",ptr->sname);
            printf("has achieved scholastic achievements as under:\n\n");
            printf("_________________________________________________________________________________________________________________________________________________\n");
            printf("|         |                                      |                                                                   |                          |\n");
            printf("|         |                                      |                          MARKS OBTAINED                           |                          |\n");
            printf("|_________|______________________________________|___________________________________________________________________|__________________________|\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|SUB CODE |             SUBJECT                  |  THEORY  |    /PR/IA     |    TOTAL    |       TOTAL(IN WORDS)    |     POSITIONAL GRADE     |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n");
            printf("|301      |  ENGLISH CORE                        |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[0],ptr->pmark[0],ptr->tmark[0]+ptr->pmark[0]);
            numtoalpha(data,ptr,i,0);
            grade(data,ptr,i,0);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|041      |  MATHEMATICS                         |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[1],ptr->pmark[1],ptr->tmark[1]+ptr->pmark[1]);
            numtoalpha(data,ptr,i,1);
            grade(data,ptr,i,1);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|042      |  PHYSICS                             |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[2],ptr->pmark[2],ptr->tmark[2]+ptr->pmark[2]);
            numtoalpha(data,ptr,i,2);
            grade(data,ptr,i,2);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|043      |  CHEMISTRY                           |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[3],ptr->pmark[3],ptr->tmark[3]+ptr->pmark[3]);
            numtoalpha(data,ptr,i,3);
            grade(data,ptr,i,3);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|083      |  COMPUTER SCIENCE(NEW)               |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[4],ptr->pmark[4],ptr->tmark[4]+ptr->pmark[4]);
            numtoalpha(data,ptr,i,4);
            grade(data,ptr,i,4);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|048      |  PHYSICAL EDUCATION                  |   %3.3d    |      %3.3d      |     %3.3d     |        ",ptr->tmark[5],ptr->pmark[5],ptr->tmark[5]+ptr->pmark[5]);
            numtoalpha(data,ptr,i,5);
            grade(data,ptr,i,5);
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|500      |  WORK EXPERIENCE                     |          |               |             |                          |           A1             |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|502      |  HEALTH & PHYSICAL EDUCATION         |          |               |             |                          |           A1             |\n");
            printf("|         |                                      |          |               |             |                          |                          |\n");
            printf("|503      |  GENERAL STUDIES                     |          |               |             |                          |           A1             |\n");
            printf("|_________|______________________________________|__________|_______________|_____________|__________________________|__________________________|\n\n\n");
            printf("Abbreviations                                                                                                        Result");
            status(data,ptr,i);
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
float percentage(struct marksheet data[100],struct marksheet *ptr,int j)
{
    ptr=&data[j];
    float p;
    p=((ptr->tmark[0]+ptr->tmark[1]+ptr->tmark[2]+ptr->tmark[3]+ptr->tmark[4]+ptr->tmark[5]+ptr->pmark[0]+ptr->pmark[1]+ptr->pmark[2]+ptr->pmark[3]+ptr->pmark[4]+ptr->pmark[5])/5);
    return p;
}
void grade(struct marksheet data[100],struct marksheet *ptr,int j,int k)
{
    int total;
    ptr=&data[j];
    total=((ptr->tmark[k]+ptr->pmark[k]));
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
void status(struct marksheet data[100],struct marksheet *ptr,int j)
{
    int p=percentage(data,ptr,j);
    if(p>=33)
    printf("\tPass");
    else
    printf("\tFail");
}
void numtoalpha(struct marksheet data[100],struct marksheet *ptr,int j,int k)
{
    int n,m,r=0,a;
    ptr=&data[j];
    n=ptr->tmark[k]+ptr->pmark[k];
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