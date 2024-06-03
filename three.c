#include <stdio.h>
int main(){
    int i=20,j=22,k=20,l=10;

    for(int m=0;m<=10;m++){
        l= ++i + ++j - k--;
    }
    printf("%d %d %d %d",l,k,j,i);
}

// output: 54 9 33 31
// Sure, here's a step-by-step demonstration of the given program:

// 1. **Initialization**:
//    - `i` is initialized to 20
//    - `j` is initialized to 22
//    - `k` is initialized to 20
//    - `l` is initialized to 10

// 2. **Loop Execution**:
//    - The `for` loop executes 11 times (m = 0 to m = 10).
//    - Inside the loop:
//      - `i` is incremented by 1 (`++i`), so `i` becomes 21.
//      - `j` is incremented by 1 (`++j`), so `j` becomes 23.
//      - `k` is decremented by 1 (`k--`), so `k` becomes 19.
//      - `l` is assigned the result of the expression `++i + ++j - k--`.
//        - `++i` increments `i` to 22.
//        - `++j` increments `j` to 24.
//        - `k--` uses the current value of `k` (19) and then decrements `k` to 18.
//        - `l` is assigned the result of the expression `22 + 24 - 19`, which is `27`.
//    - After the loop completes, `l` retains its last assigned value from inside the loop, which is `27`.

// 3. **Print Statement**:
//    - The `printf` statement prints the values of `l`, `k`, `j`, and `i` respectively.
//    - `l` is 27, `k` is 18 (since it was decremented in the loop), `j` is 24, and `i` is 22.

// So, the output of the program will be: `27 18 24 22`. 