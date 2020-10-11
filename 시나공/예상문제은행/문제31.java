public class Test {
	public static int a = 1;
	public static void main(String[] args) {
		increase();
		increase();
	}
	static void increase(){
		int b = 2;
		System.out.printf("%d, %d\n", ++a, ++b);
	}
}

// static int a=1
// 첫번째 increase() : b=2 printf("2, 3") a=2
// 두번째 increase() : b=2 printf("3, 3") a=4

// 결과
/* 2, 3
   3, 3 */