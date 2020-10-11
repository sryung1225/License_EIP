public class Test {
	public static void main(String[] args) {
		int i, j = 0;
		for (i = 0; i < 8; i++) {
			j += i;
		}
		System.out.printf("%d, %d\n", i, j);
	}
}

// i=0 j=0
// i=1 j=1
// i=2 j=1+2
// i=7 j=1+2+3+...+7
// i=8 for문 실행 중지

// 결과
// 8 28