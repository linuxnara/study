import java.util.Scanner;

public class Main_20230323 {
	public static void main(String[] args) {
		 System.out.print("안녕");
		 System.out.println("오늘");
		 System.out.println("5 + 3 = " + 5 + 3);
		 System.out.println("5 + 3 = " + (5 + 3));		 
		 System.out.println("A + 3 = " + ('A' + 3));
		 System.out.println("5 / 3 = " + (5 / 3));
		 System.out.println("5 / 3 = " + (5d / 3d));
		 System.out.println("5 / 3 = " + (5. / 3));
		 
		 //출력서식 d(정수),f(실수),c(문자),s(문자열)
		 System.out.printf("5 / 3 = %.3f\n", 5. / 3);	
		 
		 Scanner sc = new Scanner(System.in);		 
		 String addr = "";
		 System.out.print("input : ");
		 //addr = sc.next();		//입력할때 띄어쓰기 전까지만 입력된다
		 addr = sc.nextLine();
		 System.out.println(addr);
		 
		 System.out.print("\n띄어쓰기 입력(3개) : ");
		 String n1 = sc.next();
		 String n2 = sc.next();
		 String n3 = sc.next();
		 
		 System.out.printf("%s/%s/%s\n", n1, n2, n3);
		 sc.close();	 
		 
		 
	}
}
