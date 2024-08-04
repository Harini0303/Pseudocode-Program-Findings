// 1.
// What will be the output of the program?
class PassA {
    public static void main(String[] args) {
        PassA p = new PassA();
        p.start();
    }

    void start() {
        long[] a1 = { 3, 4, 5 };
        long[] a2 = fix(a1);
        System.out.print(a1[0] + a1[1] + a1[2] + " ");
        System.out.println(a2[0] + a2[1] + a2[2]);
    }

    long[] fix(long[] a3) {
        a3[1] = 7;
        return a3;
    }
}

// op : 15 15
// The reference variables a1 and a3 refer to the same long array object. When
// the [1] element is updated in the fix() method, it is updating the array
// referred to by a1. The reference variable a2 refers to the same array object.
// So Output: 3+7+5+" "3+7+5

// 2.
class Test {
    public static void main(String[] args) {
        Test p = new Test();
        p.start();
    }

    void start() {
        boolean b1 = false;
        boolean b2 = fix(b1);
        System.out.println(b1 + " " + b2);
    }

    boolean fix(boolean b1) {
        b1 = true;
        return b1;
    }
}

// op : false true
// Explanation:
// The boolean b1 in the fix() method is a different boolean than the b1 in the
// start() method. The b1 in the start() method is not updated by the fix()
// method.

// 3.
class PassS {
    public static void main(String[] args) {
        PassS p = new PassS();
        p.start();
    }

    void start() {
        String s1 = "slip";
        String s2 = fix(s1);
        System.out.println(s1 + " " + s2);
    }

    String fix(String s1) {
        s1 = s1 + "stream";
        System.out.print(s1 + " ");
        return "stream";
    }
}

// op : slipstream slip stream

// 4.
class BitShift {
    public static void main(String[] args) {
        int x = 0x80000000;
        System.out.print(x + " and  ");
        x = x >>> 31;
        System.out.println(x);
    }
}

// op : -2147483648 and 1

// The >>> operator moves all bits to the right, zero filling the left bits. The
// bit transformation looks like this:
// Before: 1000 0000 0000 0000 0000 0000 0000 0000
// After: 0000 0000 0000 0000 0000 0000 0000 0001

// 5.
class Equals {
    public static void main(String[] args) {
        int x = 100;
        double y = 100.1;
        boolean b = (x = y); /* Line 7 */
        System.out.println(b);
    }
}

// op :
// Compilation fails

// 6.
class Test {
    public static void main(String[] args) {
        int x = 20;
        String sup = (x < 15) ? "small" : (x < 22) ? "tiny" : "huge";
        System.out.println(sup);
    }
}

// op : tiny

// 7.
class Test {
    public static void main(String[] args) {
        int x = 0;
        int y = 0;
        for (int z = 0; z < 5; z++) {
            if ((++x > 2) && (++y > 2)) {
                x++;
            }
        }
        System.out.println(x + " " + y);
    }
}

// op : 6 3

// 8.
class Test {
    public static void main(String[] args) {
        int x = 0;
        int y = 0;
        for (int z = 0; z < 5; z++) {
            if ((++x > 2) || (++y > 2)) {
                x++;
            }
        }
        System.out.println(x + " " + y);
    }
}

// op : 8 2

// 9.
class Bitwise {
    public static void main(String[] args) {
        int x = 11 & 9;
        int y = x ^ 3;
        System.out.println(y | 12);
    }
}

// OP : 14

// 10.
class SSBool {
    public static void main(String[] args) {
        boolean b1 = true;
        boolean b2 = false;
        boolean b3 = true;
        if (b1 & b2 | b2 & b3 | b2) /* Line 8 */
            System.out.print("ok ");
        if (b1 & b2 | b2 & b3 | b2 | b1) /* Line 10 */
            System.out.println("dokey");
    }
}

// op : dokey

// 11.
class SC2 {
    public static void main(String[] args) {
        SC2 s = new SC2();
        s.start();
    }

    void start() {
        int a = 3;
        int b = 4;
        System.out.print(" " + 7 + 2 + " ");
        System.out.print(a + b);
        System.out.print(" " + a + b + " ");
        System.out.print(foo() + a + b + " ");
        System.out.println(a + b + foo());
    }

    String foo() {
        return "foo";
    }
}

// op : 72 7 34 foo34 7foo

// 12.
class Test {
    static int s;

    public static void main(String[] args) {
        Test p = new Test();
        p.start();
        System.out.println(s);
    }

    void start() {
        int x = 7;
        twice(x);
        System.out.print(x + " ");
    }

    void twice(int x) {
        x = x * 2;
        s = x;
    }
}

// op : 7 14

// 13.

class Two {
    byte x;
}

class PassO {
    public static void main(String[] args) {
        PassO p = new PassO();
        p.start();
    }

    void start() {
        Two t = new Two();
        System.out.print(t.x + " ");
        Two t2 = fix(t);
        System.out.println(t.x + " " + t2.x);
    }

    Two fix(Two tt) {
        tt.x = 42;
        return tt;
    }
}

// op : 0 42 42
// In the fix() method, the reference variable tt refers to the same object
// (class Two) as the t reference variable. Updating tt.x in the fix() method
// updates t.x (they are one in the same object). Remember also that the
// instance variable x in the Two class is initialized to 0.

// 14.
class BoolArray {
    boolean[] b = new boolean[3];
    int count = 0;

    void set(boolean[] x, int i) {
        x[i] = true;
        ++count;
    }

    public static void main(String[] args) {
        BoolArray ba = new BoolArray();
        ba.set(ba.b, 0);
        ba.set(ba.b, 2);
        ba.test();
    }

    void test() {
        if (b[0] && b[1] | b[2])
            count++;
        if (b[1] && b[(++count - 2)])
            count += 7;
        System.out.println("count = " + count);
    }
}

// op : count = 3

// 15.
public class Test {
    public static void leftshift(int i, int j) {
        i <<= j;
    }

    public static void main(String args[]) {
        int i = 4, j = 2;
        leftshift(i, j);
        System.out.println(i);
    }
}

// op : 4
