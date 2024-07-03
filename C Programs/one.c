
#include <studio.h>

// int main()
// {
//     printf("Hello World");

//     return 0;
// }


//1)
int main()
{
    for(int n=7;n!=0;n--){
        printf("n=%d",n--);
    }
    getchar();
    return 0;
}

//it is like an infinite loop.
//op : 7 5 3 1 -1 .......

//2)
int main()
{
    int i=1;
    do{
        printf("%d\n",i++);
        if(i<15)
        break;
    }while(1);
    return 0;
}

//op :1

int main()
{
    int i=1;
    do{
        printf("%d\n",i++);
        if(i<15)
        continue;
    }while(0);
    return 0;
}

//op : 1

//3)
#include <stdio.h>

char* getString(){
    char* str ="Nice test for strings";
    return str;
}

int main()
{
    printf("%s",getString());

    return 0;
}

//op : Nice test for strings

char getString(){
    char str ="Nice test for strings";
    return str;
}

int main()
{
    printf("%s",getString());

    return 0;
}

//op :  error

//static variable in c : A static int  variable remains in memory while the programm is running.
//  A normal or auto variable is destroyed when a 
// function call where the variable was declared is over.


//4)
int main(){
    static int i=5;
    if(--i){
        main(); //recursion
        printf("%d",i);
    }
}

//op : 4 3 2 1 0
//when it become 0 the recursion base condition fails and return and print the values.

int main(){
static int i=5;
printf("%d",i);
   if(--i){
   main(); 
}
}
//op : 5 4 3 2 1 


//5)
int main()
{
    int x;
    printf("%d",scanf("%d",&x));
    // if input value given for above scanf is 20
    //scanf will do gow many input it takes - it takes 1 input and print taht 1 input
    //scanf returns the no.of successful inputs.
    return 1;
}

//op : 1

//try it out 
int main()
{
    int x;
    printf("%d",scanf("%d",&x));
    // if input value given for above scanf is 35
    return 0;
}

//op : 1


//6)
int main(){
    int first =50;
    int second =60,third;
    third = first /*Code.io*/ + second;
    //is this comment between first and second will affect the exptression?
    //what happen if the comment is inbetween the double quotes"" - will it print it or not
    printf("%d/*Like*/\n, third");
    return 0;
}

//if there is comment what the c complier will do?
//the compiler will renove the comments first 
// but if its is in double quotes or quotes - it will not remove the comments


//op : 110/*Like*/

//if we give the comments in between the unary operators - it will also give error

int main(){
    for(int i=2;i!=0;i-/*code*/-){
        printf("%d",i);
    }
    return 0;
}

//op: it will show an error

//try it out 
int main(){
    for(int i=2;i!=0;i-=/*code*/1){
        printf("%d",i);
    }
    return 0;
}

//op : 21

//7)
int main(){
    int i;
    i=1,2,3; //(i=1),2,3;
    printf("i = %d\n",i);

    return 0;
}

//operator precedence = has higher precedence over ,

//op : i=1

//try it out 

int main(){
    int i;
    i=(1,2,3); //if we store the values in parameters it stores the last value
    printf("i = %d\n",i);

    return 0;
}

//op : i=3

//8)

int main()
{
    int c =5, no=1000;
    do{
        no/=c;

    }while(c--);

    printf("%d\n",no);
    return 0;
}

 // c --> 5 4 3 2 1 0 end 
 //no -> 1000 200 50 16 8 8 error - it will exception 

 //op : error

 // TRY IT OUT
 int main()
 {
    int c=3,no=30;
    do{
        no/=c;
        printf("%d\n",no);
    }while(c!=0);

    return 0;
 }

//op : 10 3 1 ....(infinite loop)

//9)
#define prod(a,b) a*b
int main()
{
    int x = 3, y=4;
    printf("%d", prod(x+2,y-1));
    return 0;
}

//op : iguess the answwer was 15 but the ANSWER IS 10 
//due to precendece operator
// prod(x+2,y-1)
// x+2*y-1
// 3+(2*4)-1
// 3+8-1
// 10

//try it out
#define prod(a,b) a*b
int main()
{
    int x = 2, y=6;
    printf("%d", prod(x+2,y));
    return 0;
}
//op : 14

//10)
int main()
{
    short int i=65000; //for teh short int there is a maximum limit (dead end)
    while(i++ != 0);
    printf("%d",i);
    return 0;
}

//the loop goes like 65000->65001->..... INT_MAX then the i become 0
// then here the condition also failed 0 !=0
//then i meet an operator so 0 become 1 
// then print 1 
//op : 1

//try it out
int main()
{
    unsigned int i=65000; 
    while(i++ != 65000);
    printf("%d",i);
    return 0;
}

//op : 65001

//11)
int main()
{
    char str[] = "codeio";
    char *s1 = str;

    for(int i=0;i<4;i++){
        printf("%c",*str); //*str always points to the first element
        s1++;// s1 will move for 4 iteration - also see screenshort if you needed
    }
    return 0;
}

//op : cccc

//try it out

int main()
{
    char str[] = "Like this video";
    char *s1 = str;

    for(int i=0;i<4;i++){
        printf("%c",*s1); 
        s1++;
    }
    return 0;
}

//op :Like

//12)
int main()
{
    signed char i=0;
    for(;i>=0;i++);
    printf("%d\n",i);

    return 0;
}

//op : before that the loop goes like --> 0 1 2 ... 127 then it croos the limit of signed datatype so it change into -128
// then the OP : -128

//signed char i=0;
// printf("%d\n",i);
// this take %d as integer data type 
// so the op is 0
//if
// signed char i=0;
// printf("%c\n",i); // it takes the character datatype so teh op is .(dot)

//signed char
// char - 1 byte = 8 bits
// 2^8 = 256
// signed char =[-128,127]

//try it out
int main()
{
    unsigned char i=-130;
    for(;i>=0;i++);
    printf("%d\n",i);

    return 0;
}

//op : error
//unsigned values are from 0 to 255

int main()
{
    unsigned char i=-130;
    for(;i>=0;i++);
    printf("%d\n",i);

    return 0;
}

//op : warning then -128
// -128


//13)
int main()
{
    char arr[] ={'a','b'};
    char *p = arr;
    if(&p == &arr){
        printf("Same");
    }else{
        printf("Not Same");
  }
  return 0;
}

//&arr-----
//        |
//arr[]=  a,    b
     // *arr
     // *p
// & operator
// memory address - variable&p - location where p is stored
// ------
// int p=5;
// printf("%d",&p); // 191346706

//try it out 

int main()
{
    char arr[] ={'a','b'};
    char *p = arr;
    if(p == &arr){ // true
        printf("Same");
    }else{
        printf("Not Same");
  }
  return 0;
}

//op : Same
//*p - first element of arr
// p- memory adress of *p


//14)
int main()
{
    char arr[] = {1,2,3};
    char *p = arr;p
    printf("%d", sizeof(p));
    printf("%d", sizeof(arr));
    return 0;
}

//op :8 3

// char arr[] = {1,2,3};
// char *p = arr;
// arr[] = 1,2,3
//        *arr - pointing to 1
//        *p

// size of char pointer = 8 bytes
//  printf("%d", //8);
//  size of 1 char. -1 byte
//  len(arr) =3
//  sizeof(arr) = 1*3
//              = 3 bytes
//     printf("%d", sizeof(arr));
//                    3

//try it out
int main()
{
    int arr[] = {1,2,3};
    char *p = arr;
    printf(" %d ", sizeof(p));
    printf(" %d ", sizeof(arr));
    return 0;
}

//op : 8 12

//size of 1 int - 2/4 bytes
//len(arr) =3
//sizeof(arr) = 4*3
//           =12 bytes   

//15)
//  

//op : a=0, b=0 c=1,d=0


//try it out
int main()
{
    int a =1;
    int b=0;
    int c = a|| --b; 
    int d = a-- && --b;
    printf("a = %d, b = %d ",a,b);
    printf("c = %d, d = %d ",c,d);
    return 0;
}

//op : a =0, b=-1 c=1,d=1


//16)
int main()
{
    int x,y=5,z=5;
    x=y==z;
    printf("%d",x);
    return 0;
}

//OP : 1

//comparision operator has more precendence than assignement operators
// x= 5==5
// x=(5==5)
// x=true =1

//try it out
int main()
{
    int x,y=5,z=5;
    x+=y==z; // x= x+1
    printf("%d",x);
    return 0;
}

//op : 1 ( new compilers) if it is old then it is garbage collection


//17)
int main()
{
    char arr[] = "codeio"; // c o d e i o \0
    printf("%d",sizeof(arr));// thhat char array wil go untill 0 to falag zero (null char)
    return 0;
}

//op : 7

//try it out
int main()
{
    char arr[] = "\tcodeio";  // for the tab 1 word 6 then null char 1
    printf("%d",sizeof(arr));
    return 0;
}

//OP : 8

//18)
//replace ? with something to get "geeks"
int main()
{
    char arr[] ="geeksforgeeks";
    printf("%s",?);//%s -  set charactes/string
    return 0;
}

//ans : arr+8

//q: 2
int main()
{
    printf("\"Hello%%World\""); //"" ourt is string
    return 0;
}

// OP : "Hello%World"
// why do we using escape characters?
//  '\"' = '"'
//  "%d" = 'int'
//  "%%"='%'

//try it out
int main()
{
    char arr[] = "25";
    int num =  100;
    printf("%s%% of %d =?",arr,num);

    return 0;
}

//OP : 25% of 100 =?

//19)
int func(int i)
{
    if(i%2){ // if odd =11 // op : 11 
        return (i++);
    }
    else{ //even - 12
        return func(func(i-1)); // op : 11
    }
}
//if i=101 - op : 101

int main()
{
    printf("%d\n",func(12));
    printf("%d",func(11));

    return 0;
}

//OP :11
      11


//20)
int main()
{
    int a = 1, b=0;
    b= ++a + ++a;
    printf("%d %d",a,b);
    return 0;
}

// 3 6

// operator precedence
// unary(++ , --) > arthmetic(+,-,*,/)
//in java op : is 3 5 but in c then value a is updated in both the places by 3 hecnce b = 6.

//try it out 
int main()
{
    int a = 1, b=0;
    b= a-- + ++a;
    printf("%d %d",a,b);
    return 0;
}

//op : 1 2

//21)
int main()
{
    int a[]  = {1,2,3,4,5,6};
    int b= &a;
    int c = &a+1;

    printf("%d ",c-b);
    return 0;
}


// op : 24

// & operator
// memory address - variable&a - Location where a is stored.

// int a =5;
// printf("%d",&a); // 191346706

// size of 1 int - 2/4 bytes
// len(a) =6
// sizeof(a) = 4*6
//           = 24 bytes

// pointer++ = increment pointer by sizeof(pointer)


//try it out
int main()
{
    int a[]  = {1,2,3,4,5,6};
    int b= &a;
    int c = &a+2;

    printf("%d ",c-b);
    return 0;
}

//OP : 48

//22)

int main()
{
    int a[] = {1,2,3,4,5,6};
    int *ptr = (int*)(&a+1);
    printf("%d ", *(ptr-1));
    //printf("%d ", *ptr-1); op : garbage velue(107845552555)
    return 0;
}

//op : 6

// int a[] = {1,2,3,4,5,6};
// int *ptr = (int*)(&a+1);

//try it out
int main()
{
    int a[] = {1,2,3,4,5,6};
    int *ptr = (int*)(&a+1);
    printf("%d ", *ptr-2);
    return 0;
}

//garbage value

//23)

#define R 10
#define C 20

int main()
{
    int(*p)[R][C]; // matrix => R- row , C- cloumn
    printf("%d",sizeof(*p));
    return 0;
}

//OP : 800
//if define R 1 // op : 80

// the define statement will replace all the R into thr value as 10

// sizeof 1 int = 4 bytes
// *p = int arr | 200 Elements
// sizeof(*p)= 4*200 = 800 Bytes

//try it out
#define R 10
#define C 20

int main()
{
    int(p)[R][C]; 
    printf("%d",sizeof(p));
    return 0;
}

//OP : 800
//same output if we remove the pointer also the output is 800


//24)
int main()
{
    int x = 10;
    static int y=x;

    if(x == y)  printf("Yes");
    else  printf("No");

    return 0;
}

// op : error 
// because if we use static we need to directly initialize we should not reference any var to it.

int main()
{
    int x = 10;
    static int y= 10==10; // 10==10  => 1

    if(x == y)  printf("Yes"); //10 != 1
    else  printf("No");

    return 0;
}

//OP :No

//25)
int main()
{
    int i;
    i=(printf("code "), printf("io")); //printf("io") - value returned by last printf will be counted - in that there are 2 elemenet will be counted
    printf("%d" ,i);// so here in i two will be returned and printed
    return 0;
}

//op : code io2


int main()
{
    int i;
    i=(printf("share"), printf("it!"));
    printf(" %d" ,++i);

    return 0;
}

//op : shareit! 4

//   ,  opertor  => left to right evaluation. return the value of the right side expression

//26)
int main()
{
    int i,j,p=0,q=2;

    for(int i=0,j=0;i<p,j<q;i++,j++)
    printf("Code io\n");

  return 0;
}

// op :
// Code io
// Code io

//try it out
int main()
{
    int i,j,p=2,q=0;

    for(int i=0,j=-1;i<p,j<q;i++,j++) //i<p is cannot consider
    printf("Code io\n");

  return 0;
}

// op : Code io


//27)
int main()
{
    https://www.google.com;
    //this above is not a url i.e
    //goto label + comment
    //https: -> if we are in one line and want to go to another line - then we can use goto statemenet
    printf("Hello");

    return 0;
}
//no error
//OP : Hello

//try it out
int main()
{
    https: // that goto will again call that -> it will run for the infinite times.
    printf("Hello");
    goto https;
    // goto is used as label and https is as a identifier.

    return 0;
}

//OP : infiniyte loop

//28)

int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",j[i[arr]]);  // arr[i][j] == j[i[arr]]
        }
    }
    return 0;
}

//OP : 1 2 3 4 


//try it out
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",i[j[arr]]);  // arr[j][i] == i[j[arr]]
        }
    }
    return 0;
}

//op :1 3 2 4

//29)

int main()
{
    int arr[3] ={00001,00100,10000};

    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//c compilers also understand OCTAL SYSTEM only
//unit sigit tens digit ...
//if the number start with 0 -> only use ocatal otherwise the numbers only

//OP : 1 64 10000


//try it out

int main()
{
    int arr[3] ={010,0010,00010};

    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// OP : 8 8 8 
 
 
//30)
int main()
{
    int a,b = 10;
    a = -b--; //-(b--)  // b=9 , a=-10
    printf("%d %d",a,b);
    return 0;
}

//OP : -10 9

//-a , a-- same precenedence 
// both unary operators

//try it out
int main()
{
    int a,b = 5;
    a = -b++; 
    printf("%d %d",a,b);
    return 0;
}

// op : -5 , 6

//31)
int main()
{
   int a =0;
   a = (a++)+(a++)-(a++)+(++a);
    //   0      1     2       4
   printf("%d",a);
   return 0; 
}


//try it out
int main()
{
   int a =5;
   a = (a++)+(a--)-(a++)+(--a);
   printf("%d",a);
   return 0; 
}

//OP : 11


//32)
union test{
    int x,y;
    char arr[8];
}u;
 int main(){
    printf("%d",sizeof(u));
    return 0;
 }

 //sizeof(u)
 //int x,y - 4,4
 //char arr[8]-8
