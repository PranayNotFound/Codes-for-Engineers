#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct student
{
    char rollno[20];
    char name[80];
    char mname[80];
    char fname[80];
    int mphy;
	int mmath;
	int melec;
	int mpps;
	int mbs;
	int marks;
};
void accept(struct student[], int);
void display(struct student[], int);
void search(struct student[], int, char *);
int findMax(struct student[], int);
void toppers(struct student[], int);
void sortAs(struct student[], int);
void fileDisplay(struct student list[80], int s);
void fileRead();
void displayHeader();
void displayFooter();
void dispStud(struct student[],int,int);

//void clrscr();

int main()
{	

    struct student data[20];
    
    
    int n,choice,dump;
    char rollno[20];

    printf("Number of records you want to enter : ");
    scanf("%d", &n);fflush(stdin);
    accept(data,n);
    do
    {	
        printf("\nResult Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to display toppers name.\n");
        printf("Press 4 to sort the marksheet according to marks and display.\n");
        printf("Press 5 to export the marksheet in a file.\n");
        printf("Press 6 to import and display the marksheet from the file.\n");
        printf("Press 0 to exit.\n");
        printf("\nEnter Choice(0-5) : ");
        scanf("%d", &choice);fflush(stdin);
        system("cls");
        switch (choice)
        {
        case 1:
            display(data, n);
            break;
        case 2:
            printf("Enter roll number to search : ");
            gets(rollno); fflush(stdin);
            search(data, n, rollno);
            break;
        case 3:
            toppers(data, n);
            break;
        case 4:
			sortAs(data, n);
			display(data, n);
			break; 
		case 5:
			fileDisplay(data,n);
			break;
		case 6:
			fileRead();
			
        }
    }
    while (choice!=0);
    fileDisplay(data,n);
    return 0;
}
void accept(struct student list[80], int s)
{	

	/*struct student *ptr[20];
    
    int x;
    for (x=0;x<20;x++)
    ptr[x]=&list[x];			//assigning of pointers.*/
    
    int i;
    for (i=0;i<s;i++)
    {
        printf("\nEnter data for record #%d", i+1);
        printf("\nEnter roll no : ");
        fflush(stdin);
        gets(list[i].rollno);fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);fflush(stdin);
        printf("Enter Mother's name : ");
        gets(list[i].mname);fflush(stdin);
        printf("Enter Father's name : ");
        gets(list[i].fname);fflush(stdin);
        

        printf("Enter marks in Physics : ");
        scanf("%d", &list[i].mphy);fflush(stdin);
        printf("Enter marks in Mathematics : ");
        scanf("%d", &list[i].mmath);fflush(stdin);
        printf("Enter marks in English : ");
        scanf("%d", &list[i].melec);fflush(stdin);
        printf("Enter marks in Computer : ");
        scanf("%d", &list[i].mpps);fflush(stdin);
        printf("Enter marks in Chemistry : ");
        scanf("%d", &list[i].mbs);fflush(stdin);
        
        list[i].marks = list[i].mphy + list[i].mmath + list[i].melec + list[i].mpps + list[i].mbs;
    }
}

void display(struct student list[80], int s)
{
    int i;
    displayHeader();
    printf("\t\t\tTHE MARKS OF THE STUDENTS OF SECTION ''A''\n\n\n");
    printf("\n\nSl.No.\tRollno\t\tName\t\t\tPhysics\t\tMathematics\tEnglish\t\tComputer\tChemistry\tTotal Marks\n");
    for (i=0;i<s;i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i,list[i].rollno, list[i].name, list[i].mphy , list[i].mmath , list[i].melec , list[i].mpps , list[i].mbs , list[i].marks);
    }
}
void search(struct student list[80], int s, char number[20])
{
    int i;
    for(i=0;i<s;i++)
    {
        if (strcmp(list[i].rollno,number)==0)
        {
        	displayHeader();
        	dispStud(list,s,i);
        	displayFooter();
            //printf("Rollno :\t\t %s\nName : \t\t\t%s\nPhysics : \t\t%d\nMathematics : \t\t%d\nElectrical : \t\t%d\nPPS : \t\t\t%d\nBio Science : \t\t%d\nTotal Marks : \t\t%d\n", list[i].rollno, list[i].name, list[i].mphy , list[i].mmath , list[i].melec , list[i].mpps , list[i].mbs, list[i].marks);
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

void sortAs(struct student list[80], int s)
{
    int i, j;
    struct student temp;
    
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].marks < list[j + 1].marks)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}

void fileDisplay(struct student list[80], int s)
{
    int i;
    FILE *fptr;
    fptr=(fopen("D:\\student.txt","w"));
    fprintf(fptr,"\t\t\tTHE MARKS OF THE STUDENTS OF SECTION ''H''\n\n\n");
    fprintf(fptr,"\n\nSl.No.\tRollno\t\tName\t\t\tPhysics\t\tMathematics\tEnglish\tComputer\tChemistry\tTotal Marks\n");
    for (i=0;i<s;i++)
    {
        fprintf(fptr,"%d\t\t%s\t\t%s\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i+1,list[i].rollno, list[i].name, list[i].mphy , list[i].mmath , list[i].melec , list[i].mpps , list[i].mbs , list[i].marks);
    }
    fclose(fptr);
    
}

void fileRead()
{
	char c;
	FILE *fptr;
    fptr=(fopen("D:\\student.txt","r"));
    c=fgetc(fptr);
    while (c!=EOF)
    {
    	printf("%c",c);
    	c=fgetc(fptr);
	}
	fclose(fptr);
}


void displayHeader()
{
	printf("COUNCIL FOR THE INDIAN SCHOOL CERTIFICATE EXAMINATION, NEW DELHI\n");
	printf("INDIAN SCHOOL CERTIFICATE EXAMINATION (CLASS - XII) - YEAR 2020\n\n\n");
	printf("No BN 60091859\t\t\t\t\t 2201304/069\n\n\n");
	printf("\t\t\tSTATEMENT OF MARKS\n\n");
	
}

void displayFooter()
{
	printf("\nDate of declaration of Result - 10.07.2020");
	printf("\n\n\nNote : 1. The pass mark for each subject is 35%\n       2. No divisions are awarded.\t\t\t\tChief Executive and Secretary\n\n\n");
}

void dispStud(struct student list[80], int s, int sln)
{
	int x,x3,x2,c=0,d;
	
	printf("Name  %s\n",list[sln].name);
	printf("of  RAJENDRA VIDYALAYA, SAKCHI, JAMSHEDPUR\n");
	printf("UNIQUE ID  %s\n",list[sln].rollno);
	printf("Son of\n");
	printf("Smt  %s\n",list[sln].mname);
	printf("Shri  %s\n\n\n\n\n",list[sln].fname);
	
	
	printf("   SUBJECTS\t\t\t\tPercentage Marks\n");
	printf("External Examination\n\n");
	
	printf("\nENGLISH\t\t\t\t\t%d ",list[sln].melec);
	x=list[sln].melec;
	x2=x;
    x3=x;
    while (x2!=0)
    {
    	c++;
    	x2=x2/10;
	}
	while (c!=0)
	{
		d=x/pow(10,c-1);
		/*printf("%d",d);*/
		c--;
		if (d==1)
		printf("ONE ");
		if (d==2)
		printf("TWO ");
		if (d==3)
		printf("THREE ");
		if (d==4)
		printf("FOUR ");
		if (d==5)
		printf("FIVE ");
		if (d==6)
		printf("SIX ");
		if (d==7)
		printf("SEVEN ");
		if (d==8)
		printf("EIGHT ");
		if (d==9)
		printf("NINE ");
		if (d==0)
		printf("ZERO ");
		x=x-d*pow(10,c);
	}
	
	printf("\nMATHEMATICS\t\t\t\t%d ",list[sln].mmath);
	x=list[sln].mmath;
	x2=x;
    x3=x;
    c=0;
    while (x2!=0)
    {
    	c++;
    	x2=x2/10;
	}
	while (c!=0)
	{
		d=x/pow(10,c-1);
		/*printf("%d",d);*/
		c--;
		if (d==1)
		printf("ONE ");
		if (d==2)
		printf("TWO ");
		if (d==3)
		printf("THREE ");
		if (d==4)
		printf("FOUR ");
		if (d==5)
		printf("FIVE ");
		if (d==6)
		printf("SIX ");
		if (d==7)
		printf("SEVEN ");
		if (d==8)
		printf("EIGHT ");
		if (d==9)
		printf("NINE ");
		if (d==0)
		printf("ZERO ");
		x=x-d*pow(10,c);
	}
	
	printf("\nPHYSICS\t\t\t\t\t%d ",list[sln].mphy);
	x=list[sln].mphy;
	x2=x;
    x3=x;
    c=0;
    while (x2!=0)
    {
    	c++;
    	x2=x2/10;
	}
	while (c!=0)
	{
		d=x/pow(10,c-1);
		/*printf("%d",d);*/
		c--;
		if (d==1)
		printf("ONE ");
		if (d==2)
		printf("TWO ");
		if (d==3)
		printf("THREE ");
		if (d==4)
		printf("FOUR ");
		if (d==5)
		printf("FIVE ");
		if (d==6)
		printf("SIX ");
		if (d==7)
		printf("SEVEN ");
		if (d==8)
		printf("EIGHT ");
		if (d==9)
		printf("NINE ");
		if (d==0)
		printf("ZERO ");
		x=x-d*pow(10,c);
	}
	
	printf("\nCHEMISTRY\t\t\t\t%d ",list[sln].mbs);
	x=list[sln].mbs;
	x2=x;
    x3=x;
    c=0;
    while (x2!=0)
    {
    	c++;
    	x2=x2/10;
	}
	while (c!=0)
	{
		d=x/pow(10,c-1);
		/*printf("%d",d);*/
		c--;
		if (d==1)
		printf("ONE ");
		if (d==2)
		printf("TWO ");
		if (d==3)
		printf("THREE ");
		if (d==4)
		printf("FOUR ");
		if (d==5)
		printf("FIVE ");
		if (d==6)
		printf("SIX ");
		if (d==7)
		printf("SEVEN ");
		if (d==8)
		printf("EIGHT ");
		if (d==9)
		printf("NINE ");
		if (d==0)
		printf("ZERO ");
		x=x-d*pow(10,c);
	}
	
	printf("\nCOMPUTER SCIENCE\t\t\t%d ",list[sln].mpps);
	x=list[sln].mpps;
	x2=x;
    x3=x;
    c=0;
    while (x2!=0)
    {
    	c++;
    	x2=x2/10;
	}
	while (c!=0)
	{
		d=x/pow(10,c-1);
		/*printf("%d",d);*/
		c--;
		if (d==1)
		printf("ONE ");
		if (d==2)
		printf("TWO ");
		if (d==3)
		printf("THREE ");
		if (d==4)
		printf("FOUR ");
		if (d==5)
		printf("FIVE ");
		if (d==6)
		printf("SIX ");
		if (d==7)
		printf("SEVEN ");
		if (d==8)
		printf("EIGHT ");
		if (d==9)
		printf("NINE ");
		if (d==0)
		printf("ZERO ");
		x=x-d*pow(10,c);
	}
	
	printf("\n\n\nInternal Assessment\t\t\tGrade\n");
	printf("SUPW & COMMUNITY SERVICE\t\tB\n\n");
	
	if (list[sln].melec>=40 && list[sln].mmath>=40 && list[sln].mpps>=40 && list[sln].mbs>=40 && list[sln].mphy>=40 )
	printf("\n\n\n\n\nRESULT - PASS CERTIFICATE AWARDED");
}




	
	
	
	
	
	
	
	
	
	



