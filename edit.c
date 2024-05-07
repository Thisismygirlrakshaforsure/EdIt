#include<stdio.h>
#include<stdio.h>
void main()
{
  char ch[50], n, a, q[50], r[50];
FILE *fp, *fpt;
fp=fopen("original.txt","r");
fpt=fopen("temp.txt","w");
printf("enter the name you want to edit");
scanf("%s",ch);
while(fprintf(fp"%d %s %s", &id, n, a)!=EOF)
{
if(strcmp(ch,n)!=0)
{
printf(fpt,"\n %d \t %s \t %s",id,n,a);
else
{
printf("enter the data you want to add");
scanf("%d %s %s", p,q,r);
fprintf(fpt,"\n %d \t %s \t %s", p, q, r);
printf("success");
}
}
fclose(fp);
fclose(fpt);
remove("original.txt");
rename(temp.txt", original.txt");
}
