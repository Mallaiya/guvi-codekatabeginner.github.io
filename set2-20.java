import java.util.*;
public class Multiplication {
	public static void main(String args[]) {
		System.out.println("Multiplication numbers");
		Scanner a = new Scanner(System.in);
		int n = a.nextInt();
		int num = a.nextInt();
		int i,temp;
		temp = n;
		for(i=1;i<=num;i++) {
			temp = temp * i;
			System.out.println(n+"*"+ i+ "="+ temp);
			temp = n;
		}
	}
}
