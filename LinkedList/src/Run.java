
public class Run {

	public static void main(String[] args) {
		
		//Inserting 4 nodes into LL
		LinkedList LL = new LinkedList();
		LL.insert(0,"Node0");
		LL.insert(1,"Node1");
		LL.insert(1,"Node1");
		LL.insert(2,"Node2");
		LL.insert(3,"Node3");
		LL.insert(4,"Node4");
		
		//print LL
		//LL.print();

		//Deleting a node from LL
		//LL.delete(1,"Node1");
		
		//Reversing LL
		LL.reverse2();
		
		//print LL
		LL.print();
		
	}

}
