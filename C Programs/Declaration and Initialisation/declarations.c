        //GENERAL QUESTIONS 
 
//1. Which of the following statements should be used to obtain a remainder after dividing 3.14 by 2.1 ?
// op : rem = fmod(3.14, 2.1);
//2. What are the types of linkages?

// op : External, Internal and None

// Explanation:
// External Linkage-> means global, non-static variables and functions.
// Internal Linkage-> means static variables and functions with file scope.
// None Linkage-> means Local variables.

//3. Which of the following special symbol allowed in a variable name?

// op : _ (underscore)

// 4.
// Is there any difference between following declarations?
// 1 :	extern int fun();
// 2 :	int fun();

//op : 
//No difference, except extern int fun(); is probably in another file

// Explanation:
// extern int fun(); declaration in C is to indicate the existence of a global function and it is defined externally to the current module or in another file.

// int fun(); declaration in C is to indicate the existence of a function inside the current module or in the same file.

//5.
// How would you round off a value from 1.66 to 2.0?
// ceil(1.66)

#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n Result : %f" , ceil(1.44) );
    printf("\n Result : %f" , ceil(1.66) );
 
    printf("\n Result : %f" , floor(1.44) );    
    printf("\n Result : %f" , floor(1.66) );

    return 0;
}
// Output:
// Result : 2.000000
// Result : 2.000000
// Result : 1.000000
// Result : 1.000000

// 6.
// By default a real number is treated as a

// op : double

// Explanation:
// In computing, 'real number' often refers to non-complex floating-point numbers. It include both rational numbers, such as 42 and 3/4, and irrational numbers such as pi = 3.14159265...

// When the accuracy of the floating point number is insufficient, we can use the double to define the number. The double is same as float but with longer precision and takes double space (8 bytes) than float.

// To extend the precision further we can use long double which occupies 10 bytes of memory space.

//7.

//Which of the following is not user defined data type?
// op : long int l = 2.35;

// Explanation:
// C data types classification are

// Primary data types
// int
// char
// float
// double
// void
// Secondary data types (or) User-defined data type
// Array
// Pointer
// Structure
// Union
// Enum
// So, clearly long int l = 2.35; is not User-defined data type.
// (i.e.long int l = 2.35; is the answer.)


// 8.
// Is the following statement a declaration or definition?
// extern int i;
// op : Declaration


//9.
// Identify which of the following are declarations
// 1 :	extern int x;
// 2 :	float square ( float x ) { ... }
// 3 :	double pow(double, double);

// op : 1 and 3
// Explanation:
// extern int x; - is an external variable declaration.
// double pow(double, double); - is a function prototype declaration.
// Therefore, 1 and 3 are declarations. 2 is definition.

// 10.
// In the following program where is the variable a getting defined and where it is getting declared?
#include<stdio.h>
int main()
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
int a=20;

// op : extern int a is declaration, int a = 20 is the definition

// Explanation:
// - During declaration we tell the datatype of the Variable.
// - During definition the value is initialized.

// 11.
// When we mention the prototype of a function?
// op :  Declaring

// Explanation:
// A function prototype in C or C++ is a declaration of a function that omits the function body but does specify the function's name, argument types and return type.
// While a function definition specifies what a function does, a function prototype can be thought of as specifying its interface.

                            // FIND THE OUTPUT OF PROGRAM

//1.
#include<stdio.h>
int main()
{
    enum status { pass, fail, atkt};
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = atkt;
    stud3 = fail;
    printf("%d, %d, %d\n", stud1, stud2, stud3);
    return 0;
}

// OP : 0,2,1
// Explanation:
// enum takes the format like {0,1,2..) so pass=0, fail=1, atkt=2
// stud1 = pass (value is 0)
// stud2 = atkt (value is 2)
// stud3 = fail (value is 1)
// Hence it prints 0, 2, 1

//2.
#include<stdio.h>
int main()
{
    extern int i;
    i = 20;
    printf("%d\n", sizeof(i));
    return 0;
}

// OP : 
// Linker Error : Undefined symbol 'i'

// The statement extern int i specifies to the compiler that the memory for 'i' is allocated in some other program and that 
//address will be given to the current program at the time of linking. But linker finds that no other variable of name 'i' is
// available in any other program with memory space allocated for it. Hence a linker error has occurred.


//3.
#include<stdio.h>
int main()
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
int a=20;

// op : 20
// Explanation:
// extern int a; indicates that the variable a is defined elsewhere, usually in a separate source code module.

// printf("%d\n", a); it prints the value of local variable int a = 20. Because, whenever there is a conflict between local variable and 
//global variable, local variable gets the highest priority. So it prints 20.

//4.
#include<stdio.h>
int main()
{
    char *s1;
    char far *s2;
    char huge *s3;
    printf("%d, %d, %d\n", sizeof(s1), sizeof(s2), sizeof(s3));
    return 0;
}

// op : 2, 4, 4
// Explanation:
// Any pointer size is 2 bytes. (only 16-bit offset)
// So, char *s1 = 2 bytes.
// So, char far *s2; = 4 bytes.
// So, char huge *s3; = 4 bytes.
// A far, huge pointer has two parts: a 16-bit segment value and a 16-bit offset value.
// Since C is a compiler dependent language, it may give different output in other platforms. The above program works fine in Windows (TurboC), but error in Linux (GCC Compiler).


//5.
#include<stdio.h>
int main()
{
    struct emp
    {
        char name[20];
        int age;
        float sal;
    };
    struct emp e = {"Tiger"};
    printf("%d, %f\n", e.age, e.sal);
    return 0;
}

// op : 0, 0.000000

//Explanation:
//When an automatic structure is partially initialized remaining elements are initialized to 0(zero).

//6.
#include<stdio.h>
int X=40;
int main()
{
    int X=20;
    printf("%d\n", X);
    return 0;
}

// op : 20
// Whenever there is conflict between a local variable and global variable, the local variable gets priority.

//7.
#include<stdio.h>
int main()
{
    int x = 10, y = 20, z = 5, i;
    i = x < y < z;
    printf("%d\n", i);
    return 0;
}

// op : 1
//Since x < y turns to be TRUE it is replaced by 1. Then 1 < z is compared and to be TRUE. The 1 is assigned to i.


//8.
#include<stdio.h>
int main()
{
    extern int fun(float);
    int a;
    a = fun(3.14);
    printf("%d\n", a);
    return 0;
}
int fun(int aa)
{
	return (int)++aa;
}

// op : 
// Compile Error

// Explanation:
// 2 Errors
// 1. Type mismatch in redeclaration of fun
// 2. Type mismatch in parameter aa

//9.
#include<stdio.h>
int main()
{
    int a[5] = {2, 3};
    printf("%d, %d, %d\n", a[2], a[3], a[4]);
    return 0;
}

// op : 0,0,0

// Explanation:
// When an automatic array is partially initialized, the remaining elements are initialized to 0.


//10.
#include<stdio.h>
int main()
{
    union a
    {
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0] = 3;
    u.ch[1] = 2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}

// op : 3,2, 515

// Explanation:
// printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i); It prints the value of u.ch[0] = 3, u.ch[1] = 2 and it prints the value of u.i means the value of entire union size.
// So the output is 3, 2, 515.

//11.
#include<stdio.h>
int main()
{
    int i=5;
    for(;scanf("%s", &i); printf("%d\n", i));
    return 0;
}

// op : The for loop would get executed infinite times

//12.
#include<stdio.h>
int main()
{
    int X=40;
    {
        int X=20;
        printf("%d ", X);
    }
    printf("%d\n", X);
    return 0;
}

// op : 20 40
// Explanation:
// In case of a conflict between a local variable and global variable, the local variable gets priority.


            //POINT OUT ERRORS

//1.
#include<stdio.h>
int main()
{
    display();
    return 0;
}
void display()
{
    printf("IndiaBIX.com");
}

// op :  display() is called before it is defined

// Explanation:
// In this program the compiler will not know that the function display() exists. So, the compiler will generate "Type mismatch in redeclaration of function display()".
// To over come this error, we have to add function prototype of function display().
// Another way to overcome this error is to define the function display() before the int main(); function.

//2.
#include<stdio.h>
int main()
{
    void v = 0;

    printf("%d", v);

    return 0;
}

// op : 
//Error: Declaration syntax error 'v' (or) Size of v is unknown or zero.


//3.
#include<stdio.h>
struct emp
{
    char name[20];
    int age;
};
int main()
{
    emp int xx;
    int a;
    printf("%d\n", &a);
    return 0;
}

// op : Error: in emp int xx;
// Explanation:
// There is an error in the line emp int xx;
// To overcome this error, remove the int and add the struct at the begining of emp int xx;


//4.
//Which of the following is correct about err used in the declaration given below?
 typedef enum error { warning, test, exception } err;
// op : It is a typedef for enum error.
// A typedef gives a new name to an existing data type.
// So err is a new name for enum error.


//5.
#include<stdio.h>
int main()
{
    int (*p)() = fun;
    (*p)();
    return 0;
}
int fun()
{
    printf("IndiaBix.com\n");
    return 0;
}

// op : Error: fun() prototype not defined

// The compiler will not know that the function int fun() exists. So we have to define the function prototype of int fun();
// To overcome this error, see the below program

// #include<stdio.h>
// int fun(); /* function prototype */

// int main()
// {
//     int (*p)() = fun;
//     (*p)();
//     return 0;
// }
// int fun()
// {
//     printf("IndiaBix.com\n");
//     return 0;
// }


//6.
//Which of the declaration is correct?
// op : int length;


//7.
// Which of the following operations are INCORRECT?
// int i = 35; i = i%5;
// short int j = 255; j = j;
// long int k = 365L; k = k;
// op :  float a = 3.14; a = a%3;


//8.
//Which of the following correctly represents a long double constant?

// op :  6.68L
// 6.68 is double.
// 6.68L is long double constant.
// 6.68f is float constant.
// 6.68LF is not allowed in c.


//9.
//Which of the structure is INCORRECT?

struct aa
{
    int a;
    float b;
    struct aa var;
};

// it gives "Undefined structure in 'aa'" error.


//10.
//Which of the structure is correct?
struct book
{
    char name[10];
    float price;
    int pages;
};

// result : semicolon is important


//11.

// 1 :	typedef long a;
// extern int a c;
// 2 :	typedef long a;
// extern a int c;
// 3 :	typedef long a;
// extern a c;


// op : 3 correct
// typedef long a;
// extern int a c; while compiling this statement becomes extern int long c;. This will result in to "Declaration syntax error".

// typedef long a;
// extern a int c; while compiling this statement becomes extern long int c;. This will result in to "Too many types in declaration error".

// typedef long a;
// extern a c; while compiling this statement becomes extern long c;. This is a valid c declaration statement. It says variable c is long data type and defined in some other file or module.



// TRUE OR FALSE

// 1.
// A long double can be used if range of a double is not enough to accommodate a real number.
// op : true

// True, we can use long double; if double range is not enough.
// double = 8 bytes.
// long double = 10 bytes.


//2.
//A float is 4 bytes wide, whereas a double is 8 bytes wide.
// true
// float = 4 bytes.
// double = 8 bytes.


// 3.
// If the definition of the external variable occurs in the source file before its use in a particular function, then there is no need for an extern declaration in the function.
// True
//True, When a function is declared inside the source file, that function(local function) get a priority than the extern function. So there is no need to declare a function as extern inside the same source file.


// 4.
// Size of short integer and long integer can be verified using the sizeof() operator.
// True

// True, we can find the size of short integer and long integer using the sizeof() operator.
// Example:
#include<stdio.h>
int main()
{
    short int i = 10;
    long int j = 10;
    printf("short int is %d bytes.,\nlong int is %d bytes.",
            sizeof(i),sizeof(j));
    return 0;
}
// Output:
// short int is 2 bytes.
// long int is 4 bytes.


//5.
//Range of double is -1.7e-38 to 1.7e+38 (in 16 bit platform - Turbo C under DOS)
//False
// The range of double is -1.7e+308 to 1.7e+308.


// 6.
// Size of short integer and long integer would vary from one platform to another.
// True

//Depending on the operating system/compiler/system architecture you are working on, the range of data types can vary.


//7.
//Range of float id -2.25e+308 to 2.25e+308
// False, The range of float is -3.4e+38 to 3.4e+38.



// Yes / No Questions


// 1.
// Is there any difference in the following declarations?
// int myfun(int arr[]);
// int myfun(arr[20]);
// Yes

// 2.
// Suppose a program is divided into three files f1, f2 and f3, and a variable is defined in the file f1 but used in files f2 and f3. In such a case would we need the extern declaration for the variables in the files f2 and f3?
// Yes


// 3.
// Global variable are available to all functions. Does there exist a mechanism by way of which it available to some and not to others.
// NO


//4.

// Is it true that a global variable may have several declarations, but only one definition?
// Yes
//  In all the global variable declarations, you need to use the keyword extern.


// 5.
// Is it true that a function may have several declarations, but only one definition?
// Yes

// Yes, but the function declarations must be identical.

// Example:

#include<stdio.h>

void Display();
void Display();
void Display();

void Display()
{
   printf("Weclome to IndiaBIX.com..!");
}

int main()
{
    Display();
    return 0;
}

//Output:
// Weclome to IndiaBIX.com..!
