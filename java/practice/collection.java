import java.util.*;
public class Arraylistcollection{

	ArrayList<Integer> list = new ArrayList<Integer>();
	Numberinglist(list);
	int total=0;
	Iterator<Integer> iter=list.iterator();
	while(iter.hasNext()){

		Integer val=iter.next();
		total=total+val;

	}
	System.out.println("The Total Amount is "+total);
	private static void Numberinglist(Array_List<Integer> list){

		list.add(new Integer(1));

		list.add(new Integer(2));
	}

}
