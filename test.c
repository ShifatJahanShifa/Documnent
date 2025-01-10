#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *args[])
{
    char buffer[8];
    if(argc>1)
    {
        strcpy(buffer,args[1]);
    }
    printf("output: %s\n",buffer);

    // char arr[5];
    // gets(arr);
    // printf("output: %s\n",arr);
    // for (int i = 0; i <5; i++)
    // {
    //     printf("char %c\n",arr[i]);
    // }
    // printf("char: %c\n",arr[5]);

    // char arr[5]={'h','e','l','l','o'};
    // printf("arr: %s\n",arr);
    // if(arr[4]!='\0')
    // printf("char: %c\n",arr[4]);
}