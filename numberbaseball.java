import java.util.Random;
import java.util.Scanner;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;
public class numberbaseball {

	public static void main(String[] args) {
		Random r=new Random();//랜덤함수 선언
		Scanner scanner=new Scanner(System.in);
		int a[]=new int[3];//3개의 인수를 가질 수 있는 배열 a선언
		for(int i=0;i<a.length;i++) {
			a[i]=r.nextInt(8)+1;//1부터 9까지 나올 수 있게 a[i[에 지정
			for(int j=0;j<i;j++) {//a[j]가 a[i]와 같은 값이 나온다면 i의 값을 감소시켜 같은 값이 안나올 떄 까지 돌린다.
				if (a[i]==a[j]) {i--;}
				
			}
		}
		
		int b[]=new int[3];//내가 입력해줄 배열을 생성한다
		System.out.println("[Number Baseball]");
		System.out.println("-----------------");
		System.out.println("Guess 3 numbers.");
		int n=0;
		while(true) {
			for(int i=0;i<b.length;i++) {
				b[i]=scanner.nextInt();
				
			}
			int s=0;int ball=0;
			for(int i=0;i<a.length;i++) {
				for(int j=0;j<b.length;j++) {
					if(a[i]==b[j]) {//둘이 같아도 순서가 다를 수 있기에..
						if(i==j)s++;//순서가 같다면 앞에서 지정해준 s의 값을 1 늘린다
						else ball++;//순서가 틀리다면 ball을 1늘린다
					}
				}
			}
			System.out.println(s+" strike, "+ball+" ball");
			n++;//횟수를 늘려준다
			if (s==3)break;//스트라이크가 3번 나왔다면 끝~
			
		}
		System.out.printf("You make it on %d tries",n);//횟수와 함꼐 종료시킨다.
		
		
		
		
		
	}

}
