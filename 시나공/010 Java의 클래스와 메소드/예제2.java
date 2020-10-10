public class Test {
	static class AAclass { // 고정 클래스
		int i;
		int j;
	}

	public static void main(String[] args) { // main()메소드가 들어있는 곳이 메인
		AAclass myVal = new AAclass(); // 개체 myVal 생성
		myVal.i = 10;
		myVal.j = 20;
		myVal = change(myVal);
		System.out.printf("i=%d, j=%d\n", myVal.i, myVal.j);
	}

	static AAclass change(AAclass myVal) {  // myVal.i myVal.j값도 가져옴
		int temp;
		temp = myVal.i; // temp=10
		myVal.i = myVal.j; // myVal.i=20
		myVal.j = temp; // myVal.j=10
		return myVal; 
	}
}

// 결과
// i=20, j=10