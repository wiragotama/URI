import java.io.*;
import java.lang.*;
import java.util.*;
import java.math.BigInteger;

class F_sum {
	public static void main(String[] args) {
		int m, n;
		Scanner in = new Scanner(System.in);
		do {
			m = in.nextInt();
			n = in.nextInt();
			
			BigInteger fact1 = BigInteger.valueOf(1);
			BigInteger fact2 = BigInteger.valueOf(1);
			
			for (int i = m; i >= 1; i--)
				fact1 = fact1.multiply(BigInteger.valueOf(i));
			//System.out.println(fact1);
			
			for (int i = n; i >= 1; i--)
				fact2 = fact2.multiply(BigInteger.valueOf(i));
			
			fact1 = fact1.add(fact2);
			System.out.println(fact1);
		} while (in.hasNextInt());
	}
}