public class Q1 {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4};

        System.out.println("Combinations with duplication allowed:");
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                for (int k = 0; k < a.length; k++) {
                    for (int l = 0; l < a.length; l++) {
                        System.out.println("" + a[i] + a[j] + a[k] + a[l]);
                    }
                }
            }
        }
        //case 2
        System.out.println("Combinations without duplication:");
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                if (j == i) continue;
                for (int k = 0; k < a.length; k++) {
                    if (k == i || k == j) continue;
                    for (int l = 0; l < a.length; l++) {
                        if (l == i || l == j || l == k) continue;
                        System.out.println("" + a[i] + a[j] + a[k] + a[l]);
                    }
                }
            }
        }
    }
}
