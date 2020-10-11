public class Test {
	public static void main(String[] args){
		int i = 0, hap = 0;
		do{
			++i;
			hap += i;
		} while(i < 5);
		System.out.printf("%d, %d\n", i, hap);
	}
}

// i=0 hap=0
// i=1 hap=1 1>5
// i=2 hap=3 2>5
// i=3 hap=6 3>5
// i=4 hap=10 4>5
// i=5 hap=15 5=5 : while문 탈출

// 결과
// 5, 15