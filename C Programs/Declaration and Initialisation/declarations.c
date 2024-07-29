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