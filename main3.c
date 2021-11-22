#include <stdio.h>
#include <string.h>
int glo = 76; /* variable created to under stand scope of a variable -- global variable*/
/*
    syntax of a function

    data_type func_name(parameter-type,parameter_name){
    return value_of_type_data_type;
} */

void newPrint(char *char1)
{
    printf("The value is printed using \" %s \" newPrint function\n", char1);
}

int sum(int a, int b)
{
    return a + b;
}

float average(int a, int b)
{
    return (float)(a + b) / 2;
}

struct Books/* declare struture before its function or else will get an error */
{
    char name[50];
    char author[50];
    int price;

}book;

void printStruct(struct Books bk)/* Used to store different types of data types */
{
    printf("Book name is %s \n",bk.name);
    printf("Author name is %s \n",bk.author);
    printf("Price is %d \n",bk.price);
}


int main()
{
    // newPrint("Hello world!");

    // printf("Sum of two numbers : %d\n", sum(199, 200));

    // printf("Average of two numbers : %.2f\n", average(200, 199));

    // int glo = 87;/* this variable takes priority to function as defined locally to the function */
    // printf("glo is %d \n", glo);

    //arrays
    //index starts at zero

    // int arr[10]={0,1,2,3,4,5,6,7,8,9};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for the index %d \n",i);
    //     scanf("%d",&arr[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf(" %d ",arr[i]);
    // }

    //character arrays

    // char arr[10] = {"hello you "};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%c",arr[i]);
    // }
    // printf("\n");

    //pointers

    // int a =98;
    // printf("%d\n",a);
    // int* ptr;/* creates a  pointer variable which can store address of other variables */
    // ptr = &a;/* &-address of a */
    // *ptr = 988;/* refers to the contents at variable a's address */
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);
    // printf("%d\n",a);/* *ptr and a variables are same addresses */

    
    // if(!ptr)
    // {
    //     printf("The pointer is not null\n");
    // }

    // strings

    // char name[3] = {'m','y','\0'};/* ""-for string  '' - for character */
    // char str1[65], str2[98], str3[32];
    // strcpy(str1,name);
    // printf("%s\n",name);
    // printf("%s\n",str1);
    // strcpy(str1,"Aamir");
    // strcpy(str2,"Ahmad");
    // printf("%s\n",strcat(str1,str2));
    // printf("%d\n",strcmp(str1,str2));/* >0 - when str1 is greater than str2     <0 - when str1 is less than str2*/
    
    
    //structures


    struct Books bk1, bk2;
    strcpy(bk1.name, "C programming");
    strcpy(bk1.author, "Dennis Ritchie");
    bk1.price = 78;
    printStruct(bk1);

    return 0;
}