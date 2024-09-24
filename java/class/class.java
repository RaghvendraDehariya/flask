class Main{

	public static void main(String argv[]){
		
		rectangle rec1= new rectangle();

	//	rec1.length=23;
	//	rec1.width=23;

		System.out.println("Area : "+rec1.rectArea());

	}

}


class rectangle{

	int length,width;

	rectangle(){

		length=0;

		width=0;

	}

	rectangle(int x,int y){

		length=x;
		
		width=y;

	}

	int rectArea(){

		return (length * width);

	}

}


