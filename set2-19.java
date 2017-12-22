import java.util.*;
public class Factorial {
	public static void main(String args[]) {
		System.out.println("Enter Number");
		Scanner x = new Scanner(System.in);
		int a = x.nextInt();
		int fact = 1,i;
		for(i=1;i<=a;i++) {
			fact = fact * i;
		}
		System.out.println(fact);
	}
}
