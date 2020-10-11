public class Test {
	public static void main(String[] args){
		int i = 0, hap = 0;
		for(i = 1; i <= 5; ++i, hap += i)
			System.out.printf("합은%d %4d입니다.\n", i, hap);
	}
}


// for( 시작 ; 종료조건 ; 실행문1, 실행문2)
//     실행문3;
// : 실행문3 -> 실행문1 -> 실행문2 순서로 진행

// i=0 hap=0
// i=1 print(1, 0) i=2 hap=2       
// i=2 print(2, 2) i=3 hap=2+3=5   
// i=3 print(3, 5) i=4 hap=5+4=9
// i=4 print(4, 9) i=5 hap=9+5=14
// i=5 print(5, 14) i=6 hap=14+6=20
// i=6 i<=5 조건에 안맞아 종료

// 결과
/* 합은1   0입니다.
   합은2   2입니다.
   합은3   5입니다.
   합은4   9입니다.
   합은5  14입니다. */