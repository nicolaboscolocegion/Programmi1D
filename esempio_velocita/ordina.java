import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Random;


public class ordina{

    public static void main(String[] args) {
        
        
        int[] a= new int[100000];
        int[] b= new int[100000];
        Random random = new Random();

        for(int i =0; i<a.length; i++){
            a[i]= random.nextInt(10000);
            b[i]= random.nextInt(10000);

        }

        System.out.println("inizio ad ordinare\n");

        long start = System.currentTimeMillis();

        bubbleSort(b, b.length);//chiamata a bouble sort

        long end = System.currentTimeMillis();

        NumberFormat formatter = new DecimalFormat("#0.00000"); 
        System.out.print("boublesort ci ha messo " + formatter.format((end - start) / 1000d) + " secondi\n");



        start = System.currentTimeMillis();

        mergeSort(a, a.length);//chiamata a mergesort

        end = System.currentTimeMillis();

        
        formatter = new DecimalFormat("#0.00000"); 
        System.out.print("mergesort ci ha messo " + formatter.format((end - start) / 1000d) + " secondi\n");

    }
    
    public static void bubbleSort(int [] sort_arr, int len){//bouble sort 
        
        for (int i=0;i<len-1;++i){

            for(int j=0;j<len-i-1; ++j){

                if(sort_arr[j+1]<sort_arr[j]){

                    int swap = sort_arr[j];
                    sort_arr[j] = sort_arr[j+1];
                    sort_arr[j+1] = swap;

                }
            }
        }
    }


    public static void mergeSort(int[] a, int n) { //mergesort
        if (n < 2) {
            return;
        }
        int mid = n / 2;
        int[] l = new int[mid];
        int[] r = new int[n - mid];

        for (int i = 0; i < mid; i++) {
            l[i] = a[i];
        }
        for (int i = mid; i < n; i++) {
            r[i - mid] = a[i];
        }
        mergeSort(l, mid);
        mergeSort(r, n - mid);

        merge(a, l, r, mid, n - mid);
    }

    public static void merge(int[] a, int[] l, int[] r, int left, int right) { //ricorsione mergesort
    
        int i = 0, j = 0, k = 0;
        while (i < left && j < right) {
            if (l[i] <= r[j]) {
                a[k++] = l[i++];
            }
            else {
                a[k++] = r[j++];
            }
        }
        while (i < left) {
            a[k++] = l[i++];
        }
        while (j < right) {
            a[k++] = r[j++];
        }
    }

}