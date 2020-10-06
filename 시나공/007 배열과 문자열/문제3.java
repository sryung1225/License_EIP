public class Problem {
	public static void main(String[] args){
		int[][] a = {{11, 12, 13, 14},
					 {21, 22, 23, 24},
					                  };		  
		int hap = 0;

		for (int i[] : a) // a를 1차원배열(1열)씩 i[]에 넣어 저장해가며 행의 크기(2) 만큼 반복
		{
			for (int j : i) // i를 j에 넣어 저장해가며 i의 크기(4)만큼 반복
				hap = hap + j;
		}
		System.out.printf("%d", hap);
	}
}

// i[]=a[0]={11, 12, 13, 14}  j=i[0]=11 hap=11
//                            j=i[1]=12 hap=11+12=23
//                            j=i[2]=13 hap=23+13=36
//                            j=i[3]=14 hap=36+14=50
// i[]=a[1]={21, 22, 23, 24}  j=i[0]=21 hap=50+21=71
//                            j=i[1]=22 hap=71+22=93
//                            j=i[2]=23 hap=93+23=116
//                            j=i[3]=24 hap=116+24=140

// 결과
// 140