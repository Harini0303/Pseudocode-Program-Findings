
#include <studio.h>

// int main()
// {
//     printf("Hello World");

//     return 0;
// }


//1)
// int main()
// {
//     for(int n=7;n!=0;n--){
//         printf("n=%d",n--);
//     }
//     getchar();
//     return 0;
// }

//it is like an infinite loop.
//op : 7 5 3 1 -1 .......

//2)
// int main()
// {
//     int i=1;
//     do{
//         printf("%d\n",i++);
//         if(i<15)
//         break;
//     }while(1);
//     return 0;
// }

//op :1

// int main()
// {
//     int i=1;
//     do{
//         printf("%d\n",i++);
//         if(i<15)
//         continue;
//     }while(0);
//     return 0;
// }

//op : 1

//3)
// #include <stdio.h>

// char* getString(){
//     char* str ="Nice test for strings";
//     return str;
// }

// int main()
// {
//     printf("%s",getString());

//     return 0;
// }

//op : Nice test for strings

// char getString(){
//     char str ="Nice test for strings";
//     return str;
// }

// int main()
// {
//     printf("%s",getString());

//     return 0;
// }

//op :  error

//static variable in c : A static int  variable remains in memory while the programm is running.
//  A normal or auto variable is destroyed when a 
// function call where the variable was declared is over.


//4)
// int main(){
//     static int i=5;
//     if(--i){
//         main(); //recursion
//         printf("%d",i);
//     }
// }

//op : 4 3 2 1 0
//when it become 0 the recursion base condition fails and return and print the values.

// int main(){
// static int i=5;
// printf("%d",i);
//    if(--i){
//    main(); 
//}
//op : 5 4 3 2 1 


//5)
// int main()
// {
//     int x;
//     printf("%d",scanf("%d",&x));
//     // if input value given for above scanf is 20
//     //scanf will do gow many input it takes - it takes 1 input and print taht 1 input
//     //scanf returns the no.of successful inputs.
//     return 1;
// }

//op : 1

//try it out 
// int main()
// {
//     int x;
//     printf("%d",scanf("%d",&x));
//     // if input value given for above scanf is 35
//     return 0;
// }

//op : 1




