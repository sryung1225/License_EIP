public class Problem {
    publi static void main(String[] args){
        int i, hap=0;
        for(i=1; i<=10; ++i) // i=1~10까지 단계가 끝난 뒤 ++i
            hap+=i;
        System.out.printf("%d, %d\n", i, hap);
    }
}

// i=1 hap=1 i=2
// i=2 hap=1+2=3 i=3
// i=10 hap=1+2+...+9+10=55 i=11

// 결과 11, 55