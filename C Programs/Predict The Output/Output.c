//1.
#include<stdio.h>
#define x 5+2 // macro - used to define constant
main(){
    int i;
    i=x*x*x;
    printf("i is %d",i);
}

// macro will not evaluate , it will just REPLACE
// i = x*x*x;
//  = 5+2*5+2*5+2
//  = 5+10+10+2
//  = 27



//2.
#include<stdio.h>
main()
{
    int n=65;
    switch(n){
        case 64: printf("Case64\n");
                break;
        case 'A' : printf("CaseA\n"); // 65 is the ASCII value od A
                break;
        default : printf("Default Case\n");
    }
}

// op : CaseA
// char to int vice versa, is done automatically


//3.
main()
{
    int n=1;
    switch(n){
        case 1: printf("Hello");
        default : printf("World");
    }
}

// op : HelloWorld
// they have not gave break so the output is hello world
//'break' is used to stop the program flow in switch-case

// FALL THROUGH SWITCH CASE
// if no "break" is found then it continue from the "Matched case to all the rest cases inclusinf=g "Defalut case.


//4.
main()
{
    int n=65;
    switch(n){
        case 65: printf("Integer 65");
                 break;
        case 'A' : printf("Char 65");
                  break;
        default : printf("To the moon");
    }
}

// op : compilation error
// Duplicate case Labels are not allowed.


//5.
main()
{
    int a = 5;
    int b = 10;

    switch(a){
        case a: printf("AWS");
                 break;
        case b: printf("Azure");
                  break;
        case 3: printf("GCP");
                  break;
        default : printf("Cloud");
    }
}

// op : compilation error
// case labels must be constants , not variable


//6.
main()
{
    if('A' < 'a'){
        printf("TCS");
    }else{
        printf("CTS");
    }
}

// op : TCS 


// 7.
#define TEST 5
main()
{
    printf("TEST"); // if  printf("%d",TEST) then 5
}

// op : TEST
// macro written within double quotes will be treated as strings only


// 8.
main()
{
    int a = 3;

    switch(a){
        case 1: 
        case 5: 
        case 6: printf("America");
                  break;
        case 2: printf("India");
                  break;
        case 3:
        case 7: printf("Australia");
                break;
        default : printf("To the moon");
    }
}

// op : Australia
// we can take vacant cases in switch cases

//9.
main()
{
    switch(printf("Moon")){ // no of char in the printf function that checks and return the value - 4
        case 1: printf("Case 1");
                  break;
        case 2: printf("Case 2");
                  break;
        case 3: printf("Case 3");
                  break;
        case 4: printf("Case 4");
                  break;
        default : printf("Bye");
    }
}

// op : MoonCase 4
// printf () function return an integer value

// 10.
main()
{
    int n =4;
    switch(n){ 
        case 1: printf("Case 1");
                  break;
        case 2: printf("Case 2");
                  break;
        case 3: printf("Case 3");
                  break;
    }
}

// op : empty output screen with sucessful compilation
// op : default block is completely optional






