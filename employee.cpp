#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int id;
	char name[20];
	float sal;
};
int main(int c,char *v[]){
	struct emp e;
   	e.id=atoi(v[1]);
	sprintf(e.name,"%s",v[2]);
	e.sal= atof(v[3]);
	printf("ID=%d name=%s salary=%2f",e.id,e.name,e.sal);
	return 0;
}
