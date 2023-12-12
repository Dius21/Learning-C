#include <stdio.h>
#include <string.h>
#include <math.h>


static void not_main()
{
	
	//statement input
	char str[100]="string not updated";
	printf("enter the statement you wanna save:\n");
	scanf("%s", str);

	//file handeling
	FILE *file_pointer;
	file_pointer = fopen("c program 2.txt", "a+");
	char str_read_from_file[100];
	fgets(str_read_from_file, 100, file_pointer);


	//final output
	printf("All files saved so far:\n");
	printf("%s", str_read_from_file);
	printf("Thanks for your contribution!");
}


static void main()
{
	not_main();
}