
import java.util.*;
public class Amstrong_Range {
	public static void main(String args[]) {
		Scanner a = new Scanner(System.in);
		System.out.println("Enter range between two numbers");
		int n1 = a.nextInt();
		int n2 = a.nextInt();
		int i,num,count = 0,temp,remainder,sum = 0;
		for(i=n1;i<=n2;i++) {
			// System.out.println(i);
			// System.out.println("n1 : "+n1);
			// System.out.println("n1 : "+n2);
			temp = i;
			while (temp > 0) {
				// System.out.println("Before execution Temp :" +temp);
				temp /= 10;
				count ++;
				// System.out.println("Temp :" +temp);
				// System.out.println("Count :" + count);
			}
			temp = i;
			// System.out.println("Assign Temp :" +temp);
			while(temp > 0)
			{
				// System.out.println("inside loop Temp :" +temp);
				remainder = temp % 10;
				sum = sum + power(remainder , count);
				// System.out.println("Sum:" +sum);
				temp /= 10;
				// System.out.println("After inside loop Temp :" +temp);
			}
			if(i == sum)
			{
				System.out.println("It is Amstrong :" +i);
			}
			else
			{
				System.out.println("Not amstrong :" +i);
			}
			count = 0;
			sum = 0;
}
		 
	}
	static int power(int i, int r) {
	      int c, p = 1;
	 
	      for (c = 1; c <= r; c++) 
	         p = p*i;
	 
	      return p;   
	   }
}
