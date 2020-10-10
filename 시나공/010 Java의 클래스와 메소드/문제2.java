public class Test {
	static int power(int data, int exp) {
		int i, result = 1;
		for(i = 0; i < exp; i++)
			result = result * data;
		return result;
	}
	public static void main(String args[]) { //메인
		System.out.print(power(2, 10));
	}
}

// power(2, 10) data=2 exp=10
// i=0 result = 1*2 = 2
// i=1 result = 2*2 = 2의제곱
// i=2 result = 2*2*2 = 2의3제곱
// i=9 result = 2*2*...*2 = 2의10제곱 = 1024

// 결과 1024