#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct slist
{
 int id;
 char name[15];
 int age;
 char gender[10];
 int height;
 char comp[15];
 char crime[15];
 struct slist *ptr;
};
typedef struct slist node;
node *head=NULL,*prev=NULL,*start,*new1;
void cre();
void ins();
void del();
void list();
void det();
void file();

void main()
{
int ch,c;
clrscr();
do
{
printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
printf("\t\t\t\tEnter choice:\n\t\t1.Enter the first prisoner's details(only once)\n\t\t2.Add new prisoner's details\n\t\t3.Bail any prisoner\n\t\t4.List of all prisoners\n\t\t5.Details of particular Prisoner\n\t\t6.Save in file\n");
scanf("%d",&ch);
switch(ch)
{
case 1:cre(); break;
case 2:ins(); break;
case 3:del(); break;
case 4:list(); break;
case 5:det(); break;
case 6:file(); break;
default: printf("\n**Invalid**"); break;
}
printf("\nDo u wanna continue?");
scanf("%d",&c);
}
while(c==1);
getch();
}

void cre()
{
clrscr();
 if(head==NULL)
{
head=(node*)malloc(sizeof(node));
start=head;
printf("\n\tEnter details:");
printf("\nID: ");
scanf("%d",&start->id);
printf("\nName: ");
scanf("%s",start->name);
printf("\nAge: ");
scanf("%d",&start->age);
printf("\nGender: ");
scanf("%s",&start->gender);
printf("\nHeight: ");
scanf("%d",&start->height);
printf("\nComplexion: ");
scanf("%s",start->comp);
printf("\nCrime: ");
scanf("%s",start->crime);
start->ptr=NULL;
}
}

void ins()
{
clrscr();
new1=(node*)malloc(sizeof(node));
printf("\n\tEnter details:");
printf("\nID: ");
scanf("%d",&new1->id);
printf("\nName: ");
scanf("%s",&new1->name);
printf("\nAge: ");
scanf("%d",&new1->age);
printf("\nGender: ");
scanf("%s",&new1->gender);
printf("\nHeight: ");
scanf("%d",&new1->height);
printf("\nComplexion: ");
scanf("%s",&new1->comp);
printf("\nCrime: ");
scanf("%s",&new1->crime);
 new1->ptr=NULL;
start=head;
 while(start->ptr!=NULL)
   start=start->ptr;
 start->ptr=new1;
}

void del()
{
  int keyid;
 node*prev;
prev=NULL;
start=head;
  printf("Enter the id of the criminal to be bailed:");
  scanf("%d",&keyid);
  while(start!=NULL)
  {
   if(start->id==keyid)
    {
      break;
     }
     prev=start;
     start=start->ptr;
}
  if(start==NULL)
 {
  printf("The prisoner with id %d  doesnt exist\n",keyid);
  getch();
  return;
 }
   if(start==head)
      head=head->ptr;
 else
   prev->ptr=start->ptr;
 free(start);
   printf("\nCriminal with id %d is bailed",keyid);
 }

void list()
{
	if(head!=NULL)
	{
	 start=head;
	while(start!=NULL)
	{
	  printf("Id:%d\tName:%s\n",start->id,start->name);
	  printf("\n");
	  start=start->ptr;
	}
	}
}

void det()
{
  struct slist *t;
  int keyid,c=0;
  printf("Enter the Id of the Prisoner for detail");
  scanf("%d",&keyid);
  start=head;
  while(start!=NULL)
 {
   if(start->id==keyid)
   {
     printf(" Id : %d\n",start->id);
     printf(" Name : %s\n",start->name);
     printf(" Age : %d\n",start->age);
     printf(" Gender : %s\n",start->gender);
     printf(" Height : %d\n",start->height);
     printf(" Complexion : %s\n",start->comp);
     printf(" Crime : %s\n",start->crime);
c=1;
  break;
  }
 start=start->ptr;
}
if(c==0)
 printf("Criminal not found\n");
}

void file()
{
 int i;
FILE* fptr=fopen("file.txt","w");
node* write=head;
 if(fptr==NULL)
 {
  clrscr();
  printf("Error creating file\n");
  getch();
  return;
 }
 while(write!=NULL)
 {
  fputs("\n",fptr);
  fprintf(fptr,"%d",write->id);
  fputs("\t",fptr);
  fputs(write->name,fptr);
  fputs("\t",fptr);
  fprintf(fptr,"%d",write->age);
  fputs("\t",fptr);
  fputs(write->gender,fptr);
  fputs("\t",fptr);
  fprintf(fptr,"%d",write->height);
  fputs("\t",fptr);
  fputs(write->comp,fptr);
  fputs("\t",fptr);
  fputs(write->crime,fptr);
  fputs("\t",fptr);
  write=write->ptr;
 }
 fclose(fptr);
 printf("\nSuccessfully stored in file.\n");
}
