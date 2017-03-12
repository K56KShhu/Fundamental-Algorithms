public class Main {

    public static void main(String[] args) {
        final int MAX = 20;

        int[][] a = new int[MAX][];

        for (int i = 0; i < MAX; i++) {
            a[i] = new int[i + 1];
        }

        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                // value = c(j, i)
                int value = 1;
                // if j = 0, not get into the loop
                for (int k = 1; k <= j; k++) {
                    value = value * (i - (k - 1)) / k;
                }

                a[i][j] = value;
            }
        }

        for (int[] row : a) {
            for (int value : row) {
                System.out.printf("%-9d", value);
            }
            System.out.println();
        }
    }

}
