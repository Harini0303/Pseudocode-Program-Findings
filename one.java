public class one {
    public static String zoho(String s) {
        char[] c = s.toCharArray();
        for (int i = 1; i < c.length; i = i + 2) {
            c[i] = (char) (c[i - 1] + c[i] - '0');
        }
        return String.valueOf(c);
    }

    public static void main(String[] args) {
        String s = "D4V1D";
        System.out.println(zoho(s));

    }
}
