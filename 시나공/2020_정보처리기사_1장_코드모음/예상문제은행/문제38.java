import java.util.Scanner;
public class Test {
	public static void main(String[] args){
		int inNum;
		Scanner scan01 = new Scanner(System.in);
		inNum = scan01.nextInt();
		if(inNum % 2 == 0)
			System.out.printf("%d= ¦���Դϴ�.\n", inNum);
		else
			System.out.printf("%d= Ȧ���Դϴ�.\n", inNum);
		scan01.close();
	}
}