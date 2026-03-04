#include<stdio.h>
enum week{mon=5,tue=6,wed=16,thur,fri,sat,sun};
main()
{
	enum week day;
	day=sun;
	printf("%d",day);
}
