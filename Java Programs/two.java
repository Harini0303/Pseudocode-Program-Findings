public class two {
    public static void main(String[] args) {
        int[] arr = { 1, 3, 5, 6, 8 };
        int target = 7;
        int low = 0, high = arr.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                System.out.println(mid);
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }

        }
        System.out.println(low);
    }
}

// output
// 4
