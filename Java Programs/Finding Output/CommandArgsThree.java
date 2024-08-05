public class CommandArgsThree {
    public static void main(String[] args) {
        String[][] argCopy = new String[2][2];
        int x;
        argCopy[0] = args;
        x = argCopy[0].length;
        for (int y = 0; y < x; y++) {
            System.out.print(" " + argCopy[0][y]);
        }
    }
}
// and the command-line invocation is

// > java CommandArgsThree 1 2 3

// op : 1 2 3

// Explanation:
// In argCopy[0] = args;, the reference variable argCopy[0], which was referring
// to an array with two elements, is reassigned to an array (args) with three
// elements.

// 2.
public class CommandArgs {
    public static void main(String[] args) {
        String s1 = args[1];
        String s2 = args[2];
        String s3 = args[3];
        String s4 = args[4];
        System.out.print(" args[2] = " + s2);
    }
}
// and the command-line invocation is

// > java CommandArgs 1 2 3 4

// op : An exception is thrown at runtime.

// An exception is thrown because in the code String s4 = args[4];, the array
// index (the fifth element) is out of bounds. The exception thrown is the
// cleverly named ArrayIndexOutOfBoundsException.

// 3.
public class F0091 {
    public void main(String[] args) {
        System.out.println("Hello" + args[0]);
    }
}
// What will be the output of the program, if this code is executed with the
// command line:

// > java F0091 world

// op : The code does not run.

// Option D is correct. A runtime error will occur owning to the main method of
// the code fragment not being declared static:

// Exception in thread "main" java.lang.NoSuchMethodError: main

// The Java Language Specification clearly states: "The main method must be
// declared public, static, and void. It must accept a single argument that is
// an array of strings."

// 4.
// What will be the output of the program?

public class TestDogs {
    public static void main(String[] args) {
        Dog[][] theDogs = new Dog[3][];
        System.out.println(theDogs[2][0].toString());
    }
}

class Dog {
}

// op : An exception is thrown at runtime

// The second dimension of the array referenced by theDogs has not been
// initialized. Attempting to access an uninitialized object element
// (System.out.println(theDogs[2][0].toString());) raises a
// NullPointerException.