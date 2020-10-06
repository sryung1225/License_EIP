// 예제.c 를 java로 변형

public class Example {
	public static void main(String[] args) {
		int a[] = new int[5];
		int i;
		for (i = 0; i < 5; i++)
			a[i] = i + 10; // a=[10, 11, 12, 13, 14]
		for (i = 0; i < 5; i++)
			System.out.printf("%d ", a[i]);
	}
}

// 결과
// 10 11 12 13 14