import java.util.Scanner;
public class Test {
	public static void main(String args[]) {
		int i;
		Scanner s = new Scanner(System.in);
		System.out.print("숫자를 입력하시오: ");
		i = s.nextInt();
		recursive(i);
		s.close();
	}
	static int recursive(int n) {
		int i;
		if (n < 1)
			return 2;
		else {
			i = (2 * recursive(n - 1)) + 1;
			System.out.println(i);
			return i;
		}
	}
}

// r(5) = 2*r(4)+1, println(r(5)) => r(5)=47*2+1=95
// r(4) = 2*r(3)+1, println(r(4)) => r(4)=23*2+1=47
// r(3) = 2*r(2)+1, println(r(3)) => r(3)=11*2+1=23
// r(2) = 2*r(1)+1, println(r(2)) => r(2)=5*2+1=11
// r(1) = 2*r(0)+1, println(r(1)) => r(1)=2*2+1=5
// r(0) = 2

// 결과
/* 5
   11
   23
   47
   95 */