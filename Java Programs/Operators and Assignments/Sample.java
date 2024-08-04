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
