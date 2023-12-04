#include <stdio.h>
#include <string.h>

void not_main()
{
    char usr_stmt[100]="somewhere, somehow, your statement didn't reach till here";

    //input statement from user
    //scaf("%s", usr_stmt);

    //output statement
    printf("Hello world!!\n%s", usr_stmt);
}

void main(){
    not_main();
}