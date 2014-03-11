import java.io.*;
import java.lang.*;
import java.util.*;

/**
* Using the brute force method to compute the collatz conjencture
*/

//function that returns the next number in the sequence
public class CollatzBrute{

public static long next(long n) {
    if (n % 2 == 0)
        return n / 2;       // if n is even
    else
        return 3 * n + 1;   // if n is odd
}

public static int cycleLength(long n) {
    // our base case
    // 1 has a cycle length of 1
    if (n == 1)
        return 1;
 
    // the cycle length of the current number is 1 greater
    // than the cycle length of the next number
    int length = 1 + cycleLength(next(n));
 
    return length;
}

public static void main(String[] args) throws Exception{
	Scanner in = new Scanner(System.in);
    PrintWriter out = new PrintWriter(System.out, true);
 
    // while there is some input to read
    while (in.hasNextInt()) {
        int i = in.nextInt(),
            j = in.nextInt(),
            from = Math.min(i, j),
            to = Math.max(i, j),
            max = 0;
 
        // loop through all the numbers
        // and find the biggest cycle
        for (int n = from; n <= to; n++) {
            max = Math.max(max, cycleLength(n));
        }
 
        out.printf("%d %d %d\n", i, j, max);
    }
}
}