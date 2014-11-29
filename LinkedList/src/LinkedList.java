public class LinkedList {

	Node header;

	LinkedList() {
		header = null;
	}

	Node insert(int id, String name) {

		Node n = new Node(id, name);

		if (header == null) {
			header = n;
		} else {
			Node curr = header;
			while (curr.next != null) {
				curr = curr.next;
			}
			curr.next = n;
		}
		return header;
	}
	
	void reverse1()
	{
		Node curr=header,next,temp;
		for(temp=header;temp.next!=null;temp=temp.next);
		header = temp;
		temp = temp.next;
		next = curr.next;
		
		while(next!=null)
		{
			curr.next = temp;
			temp = curr;
			curr = next;
			next = next.next;
		}
		curr.next = temp;
	}
	
	void reverse2()
	{
		Node prev=null,curr=header,next=curr.next;		
		while(next!=null)
		{
			curr.next = prev;
			prev = curr;
			curr = next;
			next = curr.next;
		}
		curr.next = prev;
		header = curr;
	}

	void delete(int id, String name) {

		Node curr = header;
		Node prev = null;

		while (curr != null) {
			if (curr.id == id && curr.name.equals(name)) {
				if (curr == header) {
					prev = curr;
					curr = curr.next;
					header = null; //emulating garbage collect as in C++/C (delete/free header;) 
					header = curr;
				} else {
					prev.next = curr.next;
					curr = null; // explicitly calling garbage collector
					curr = prev.next;
				}
			} else {
				prev = curr;
				curr = curr.next;
			}
		}
	}

	void print() {
		Node curr = header;
		while (curr != null) {
			System.out.println(curr.toString());
			curr = curr.next;
		}
	}

}

class Node {
	int id;
	String name;
	Node next;

	Node(int id, String name) {
		this.id = id;
		this.name = name;
		this.next = null;
	}

	public String toString() {
		return "(" + this.id + ", " + this.name + ")";
	}

	boolean areSame(Node that) {
		if (this.id == that.id && this.name.equals(that.name)) {
			return true;
		}
		return false;
	}
}
