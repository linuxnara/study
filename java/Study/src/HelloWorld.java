
public class HelloWorld {

	public static int a = 100;

	public static void main(String[] args) {
		//System.out.println("Hello World");

		int[] numbers = {2, -9, 0, 5, 12,-25,22,9,8,12};

		int sum = 0;
		for (int number : numbers) {
			sum += number;
		}

		double average;
		int alen = numbers.length;
		average = (double) sum / alen;

		System.out.println("합 = " + sum);
		System.out.println("평균 = " + average);


		System.out.println("--------------------------------------");
		//진수출력
		int data = 10;

		System.out.println(Integer.toBinaryString(data));		//2진수
		System.out.println(Integer.toOctalString(data));		//8진수
		System.out.println(Integer.toHexString(data));		//16진수

		System.out.println(Integer.parseInt("1010", 2));	//2->10진수
		System.out.println(Integer.parseInt("12", 8));	//8->10진수
		System.out.println(Integer.parseInt("a", 16));	//16->10진수

		
	}

}
