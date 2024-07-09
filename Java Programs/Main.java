//1)

class Test {
    public static void main(String[] args) {
        int a = 10;
        System.out.println(a);
        System.out.println(a++);
        System.out.println(++a);
        System.out.println(a--);
        System.out.println(--a);
        System.out.println(a);
    }
}

// OP :
// 10
// 10
// 12
// 12
// 10
// 10

// 2)
public class Main {
    public static void main(String[] args) {
        int a = 5;
        System.out.println(++a - ++a);
    }
}

// op : -1

// 3.
class Test {
    public static void main(String[] args) {
        int a = 5;
        System.out.println((--a + --a) * (++a - a--) + (--a + a--) * (++a + a++));
    }
}

// op : 16

// 1. **Initial Value**: `a = 5`

// 2. **First Part**: `(--a + --a)`
// - `--a` (a becomes 4)
// - `--a` again (a becomes 3)
// - Result: `(3 + 3) = 6`

// 3. **Second Part**: `(++a - a--)`
// - `++a` (a becomes 4)
// - `a--` (uses 4, then a becomes 3)
// - Result: `(4 - 4) = 0`

// 4. **Third Part**: `(--a + a--)`
// - `--a` (a becomes 2)
// - `a--` (uses 2, then a becomes 1)
// - Result: `(2 + 2) = 4`

// 5. **Fourth Part**: `(++a + a++)`
// - `++a` (a becomes 2)
// - `a++` (uses 2, then a becomes 3)
// - Result: `(2 + 2) = 4`

// Combining all parts in the expression:
// - `(6) * (0) + (4) * (4)`
// - `0 + 16`
// - Result: `16`

// **Output**: `16`

// 4)
class Test {
    public static void main(String[] args) {
        boolean b1 = true;
        boolean b2 = false;
        System.out.println(b1 & b1);// true
        System.out.println(b1 & b2);// false
        System.out.println(b2 & b1);// false
        System.out.println(b2 & b2);// false
        System.out.println(b1 | b1);// true
        System.out.println(b1 | b2);// true
        System.out.println(b2 | b1);// true
        System.out.println(b2 | b2);// false
        System.out.println(b1 ^ b1);// false
        System.out.println(b1 ^ b2);// true
        System.out.println(b2 ^ b1);// true
        System.out.println(b2 ^ b2);// false
    }
}
