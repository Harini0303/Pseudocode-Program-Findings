
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


//6)
// int main(){
//     int first =50;
//     int second =60,third;
//     third = first /*Code.io*/ + second;
//     //is this comment between first and second will affect the exptression?
//     //what happen if the comment is inbetween the double quotes"" - will it print it or not
//     printf("%d/*Like*/\n, third");
//     return 0;
// }

//if there is comment what the c complier will do?
//the compiler will renove the comments first 
// but if its is in double quotes or quotes - it will not remove the comments


//op : 110/*Like*/

//if we give the comments in between the unary operators - it will also give error

// int main(){
//     for(int i=2;i!=0;i-/*code*/-){
//         printf("%d",i);
//     }
//     return 0;
// }

//op: it will show an error

//try it out 
// int main(){
//     for(int i=2;i!=0;i-=/*code*/1){
//         printf("%d",i);
//     }
//     return 0;
// }

//op : 21

//7)
// int main(){
//     int i;
//     i=1,2,3; //(i=1),2,3;
//     printf("i = %d\n",i);

//     return 0;
// }

//operator precedence = has higher precedence over ,

//op : i=1

//try it out 

// int main(){
//     int i;
//     i=(1,2,3); //
//     printf("i = %d\n",i);

//     return 0;
// }

//op : i=3

