
import java.awt.desktop.AboutHandler;
import java.util.Scanner;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;

public class Tesla {
	String model;
	String engine;
	int power;
	double errorcnt=0;
	double count=0;
	double accidentrate;
	public Tesla(String a) {
		
		model=a;
		engine="Italy";
		
	}
	
	public Tesla(int p){
		this.power=p;
		if (p>=90) this.engine="완벽한 엔진";
		else if(p>=80) this.engine="조금 좋은 엔진";
		else this.engine="싸구려 엔진";
		
	}
	public Tesla() {
		System.out.println(" xxx 객체가 생성됨 ");}
	public Tesla(String a,String b) {
		model=a;
		engine=b;
	}
	public void error() {
		System.out.println("사고가" +errorcnt+"쨰 발생");
	}
	public void rate() {
		System.out.println("사고 발생률"+accidentrate+"이다");
	}
}
