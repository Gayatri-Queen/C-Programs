#include<stdio.h>
enum week{mon=1,tue=2,wed=3,thur,fri,sat,sun};
main()
{
	enum week day;
	day=sun;
	printf("%d",day);
}
