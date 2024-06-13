//1)
// #include <studio.h>

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