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
