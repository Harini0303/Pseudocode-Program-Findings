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

// 24)
public class Main {
    public static void main(String[] args) {
        double d = 22.22;
        byte b = (byte) (short) (int) (long) (float) d;
        System.out.println(b);
    }
}

// op : 22

// 25)
public class Main {
    public static void main(String[] args) {
        int i = 130;
        byte b = (byte) i;
        System.out.println(b);
    }
}

// op : -126

// The variable i is initialized with the value 130.
// When i is cast to a byte, only the lower 8 bits of the integer 130 are
// considered.
// The binary representation of 130 in 8 bits is 10000010.
// In Java, the byte data type is signed and can represent values from -128 to
// 127. The binary 10000010 is interpreted as -126 in the signed byte
// representation (since the most significant bit is 1, indicating a negative
// number).
// Therefore, the output is -126.

// 26)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        int j;
        if (i == 10) {
            j = 20;
        }
        System.out.println(j);
    }
}

// op :
// error: variable j might not have been initialized

// 27)

public class Main {
    public static void main(String[] args) {
        int i = 10;
        int j;
        if (i == 10) {
            j = 20;
        } else {
            j = 30;
        }
        System.out.println(j);
    }
}

// op : 20

// 28)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        int j;
        if (i == 10) {
            j = 20;
        } else if (i == 20) {
            j = 30;
        }
        System.out.println(j);
    }
}

// op : error : j might not been initialised

// 29)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        int j;
        if (i == 10) {
            j = 20;
        } else if (i == 20) {
            j = 30;
        } else {
            j = 40;
        }
        System.out.println(j);
    }
}

// op : 20

// 30)

public class Main {
    public static void main(String[] args) {
        final int i = 10;
        int j;
        if (i == 10) {
            j = 20;
        }
        System.out.println(j);
    }
}

// op : 20

// 31)
public class Main {
    public static void main(String[] args) {
        int j;
        if (true) {
            j = 20;
        }
        System.out.println(j);
    }
}

// op : 20

// 32)
public class Main {
    public static void main(String[] args) {
        int i = 10;
        switch (i) {
            case 5:
                System.out.println("Five");
                break;
            case 10:
                System.out.println("Ten");
                break;
            case 15:
                System.out.println("Fifteen");
                break;
            case 20:
                System.out.println("Twenty");
                break;
            default:
                System.out.println("Default");
                break;
        }
    }
}

// Op : 10

// 33)

public class Main {
    public static void main(String[] args) {
        char c = 'B';
        switch (c) {
            case 'A':
                System.out.println("Five");
                break;
            case 'B':
                System.out.println("Ten");
                break;
            case 'C':
                System.out.println("Fifteen");
                break;
            default:
                System.out.println("Default"); // ("Default”) - it show error ( because of its showing)
                break;
        }

    }
}

// op : Ten

// 34)
public class Main {
    public static void main(String[] args) {
        String str = "BBB";
        switch (str) {
            case "AAA":
                System.out.println("AAA");
                break;
            case "BBB":
                System.out.println("BBB");
                break;
            case "CCC":
                System.out.println("CCC");
                break;
            case "DDD":
                System.out.println("DDD");
                break;
            default:
                System.out.println("Default");
                break;
        }
    }
}

// OP : BBB

// 35)

public class Main {
    public static void main(String[] args) {
        int i = 10;
        switch (i) {
            default:
                System.out.println("Default");
                break;
        }
    }
}

// OP : Default

// 36)

public class Main {
    public static void main(String[] args) {
        int i = 10;
        switch (i) {
            case 5:
                System.out.println("Five");
                break;
            case 10:
                System.out.println("Ten");
                break;
            case 15:
                System.out.println("Fifteen");
                break;
        }
    }
}

// op : Ten

// 37)

public class Main {
    public static void main(String[] args) {
        int i = 50;
        switch (i) {
            case 5:
                System.out.println("Five");
                break;
            case 10:
                System.out.println("Ten");
                break;
            case 15:
                System.out.println("Fifteen");
                break;
            case 20:
                System.out.println("Twenty");
                break;
        }
    }
}

// op : no output . but the code will run

// 38)

public class Main {
    public static void main(String[] args) {
        byte b = 126;
        switch (b) {
            case 125:
                System.out.println("125");
                break;
            case 126:
                System.out.println("126");
                break;
            case 127:
                System.out.println("127");
                break;
            case 128:
                System.out.println("128");
                break;
            default:
                System.out.println("Default");
                break;
        }
    }
}

// op : Main.java:17: error: incompatible types: possible lossy conversion from
// int to byte

// 39)
public class Main {
    public static void main(String[] args) {
        final int i = 5, j = 10, k = 15, l = 20;
        switch (10) {
            case i:
                System.out.println("Five");
                break;
            case j:
                System.out.println("Ten");
                break;
            case k:
                System.out.println("Fifteen");
                break;
            case l:
                System.out.println("Twenty");
                break;
            default:
                System.out.println("Default");
                break;
        }
    }
}

// op : Ten

// 40)
public class Main {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }
    }
}

// op :
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9

// 41)
public class Main {
    public static void main(String[] args) {
        int i = 0;
        for (; i < 10; i++) {
            System.out.println(i);
        }
    }
}

// op :
// same as previous output

// 42)
public class Main {
    public static void main(String[] args) {
        int i = 0;
        for (System.out.println("Hello"); i < 10; i++) {
            System.out.println(i);
        }
    }
}

// op :
// Hello
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9

// 43)
public class Main {
    public static void main(String[] args)
    {
    for(int i=0, float f=0.0f ;i<10 && f<10.0f; i++,f++)
    {
    System.out.println(i+" "+f);
    }
    }
}

// op : error
// The given code contains a syntax error. In Java, you cannot declare variables
// of different types in a single for loop initialization. Each type must be
// declared in a separate statement.

// 44)
public class Main {
    public static void main(String[] args) {
     for (int i = 0, int j = 0; i < 10 && j < 10; i++, j++) {
     System.out.println(i + " " + j);
     }
     }
}

// op : error

// 45)
public class Main {
    public static void main(String[] args) {
        for (int i = 0, j = 0; i < 10 && j < 10; i++, j++) {
            System.out.println(i + " " + j);
        }
    }
}

// op :

// 0 0
// 1 1
// 2 2
// 3 3
// 4 4
// 5 5
// 6 6
// 7 7
// 8 8
// 9 9
