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

// 5)
class Test {
    public static void main(String[] args) {
        int a = 10;
        int b = 2;
        System.out.println(a & b);
        System.out.println(a | b);
        System.out.println(a ^ b);
        System.out.println(a << b);
        System.out.println(a >> b);
    }
}

// op :
// 2
// 10
// 8
// 40
// 2

// 56)
class Test {
    public static void main(String[] args) {
        for (;;) {

        }
    }
}

// op : it will run it will not show error or output.

// 6)
public class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 10;
        if ((a++ == 10) | (b++ == 10)) {
            System.out.println(a + " " + b);
        }
        int c = 10;
        int d = 10;
        if ((c++ == 10) || (d++ == 10)) {
            System.out.println(c + " " + d);
        }
    }
}

// op :
// 11 11
// 11 10

// 7)
public class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 10;
        if ((a++ != 10) & (b++ != 10)) {
        }
        System.out.println(a + " " + b);
        int c = 10;
        int d = 10;
        if ((c++ != 10) && (d++ != 10)) {
        }
        System.out.println(c + " " + d);
    }
}

// op :
// 11 11
// 11 10

// 8)
public class Main {
    public static void main(String[] args) {
        System.out.println(Byte.MIN_VALUE + "----->" + Byte.MAX_VALUE);
        System.out.println(Short.MIN_VALUE + "---->" + Short.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE + "----->" + Integer.MAX_VALUE);
        System.out.println(Long.MIN_VALUE + "----->" + Long.MAX_VALUE);
        System.out.println(Float.MIN_VALUE + "----->" + Float.MAX_VALUE);
        System.out.println(Double.MIN_VALUE + "----->" + Double.MAX_VALUE);
        System.out.println(Character.MIN_VALUE + "----->" + Character.MAX_VALUE);
        // System.out.println(Boolean.MIN_VALUE + "----->" + Boolean.MAX_VALUE);
    }
}

// -128----->127
// -32768---->32767
// -2147483648----->2147483647
// -9223372036854775808----->9223372036854775807
// 1.4E-45----->3.4028235E38
// 4.9E-324----->1.7976931348623157E308
// 0----->65535
// false----->true

// op :
// -128----->127
// -32768---->32767
// -2147483648----->2147483647
// -9223372036854775808----->9223372036854775807
// 1.4E-45----->3.4028235E38
// 4.9E-324----->1.7976931348623157E308
// ----->￿

// 9)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        byte b = i;
        System.out.println(i + " " + b);
    }
}

// op :
// Error: incompatible types: possible lossy conversion from int to byte

// 10)
public class Main {
    public static void main(String[] args) {
        byte b = 65;
        char c = b;
        System.out.println(b + " " + c);
    }
}

// op : Error: incompatible types: possible lossy conversion from byte to char

// 11)
public class Main {
    public static void main(String[] args) {
        char c = 'A';
        short s = c;
    }
}

// op : Error: incompatible types: possible lossy conversion from char to short

// 12)
public class Main {
    public static void main(String[] args) {
        char c = 'A';
        int i = c;
        System.out.println(c + " " + i);
    }
}

// op :
// A 65

// 13)
public class Main {
    public static void main(String[] args) {
        byte b = 128;
        System.out.println(b);
    }
}

// op :Error: incompatible types: possible lossy conversion from int to byte

// 14)
public class Main {
    public static void main(String[] args) {
        byte b1 = 60;
        byte b2 = 70;
        byte b = b1 + b2;
        System.out.println(b);
    }
}

// op : Error: incompatible types: possible lossy conversion from int to byte

// 15)

public class Main {
    public static void main(String[] args) {
        byte b1 = 30;
        byte b2 = 30;
        byte b = b1 + b2;
        System.out.println(b);
    }
}

// op :
// Error: incompatible types: possible lossy conversion from int to byte

// 16)
public class Main {
    public static void main(String[] args) {
        long l = 10;
        float f = l;
        System.out.println(l + " " + f);
    }
}

// op : 10 10.0

// 17)
public class Main {
    public static void main(String[] args) {
        float f = 22.22f;
        long l = f;
        System.out.println(f + " " + l);
    }
}

// op : Error: incompatible types: possible lossy conversion from float to long

// 18)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        short s = (byte) i;
        System.out.println(i + " " + s);
    }
}

// op : 10 10

// 19)
public class Main {
    public static void main(String[] args) {
        byte b = 65;
        char c = (char) b;
        System.out.println(b + " " + c);
    }
}

// op : 65 A

// 20)

public class Main {
    public static void main(String[] args) {
        char c = 'A';
        short s = (short) c;
        System.out.println(c + " " + s);
    }
}

// op : A 65

// 21)
public class Main {
    public static void main(String[] args) {
        short s = 65;
        char c = (byte) s;
        System.out.println(s + " " + c);
    }
}

// op : Main.java:4: error: incompatible types: possible lossy conversion from
// byte to char
// char c = (byte) s;

// 22)

public class Main {
    public static void main(String[] args) {
        byte b1 = 30;
        byte b2 = 30;
        byte b = (byte) b1 + b2;
        System.out.println(b);
    }
}

// op :
// Main.java:5: error: incompatible types: possible lossy conversion from int to
// byte
// byte b = (byte) b1 + b2;

// 23)
public class Main {
    public static void main(String[] args) {
        byte b1 = 30;
        byte b2 = 30;
        byte b = (byte) (b1 + b2);
        System.out.println(b);
    }
}

// op : 60