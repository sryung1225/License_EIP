public class Problem {
	public static void main(String[] args) {
		int[][] a = new int[3][5];
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 5; j++) {
				a[i][j] = i + j;
				System.out.printf("%d ", a[i][j]);
			}
			System.out.println();
		}
	}
}

// a[0][0]=0 a[0][1]=1 a[0][2]=2
// a[1][0]=0 a[1][1]=2 a[1][2]=3

// 결과
/* 0 1 2 3 4
   1 2 3 4 5
   2 3 4 5 6 */