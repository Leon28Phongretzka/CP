class Node
{
	constructor(data)
	{
		this.data = data;
		this.next = null;
	}
}

class LinkedList
{
	constructor()
	{
		this.head = null;
	}
	insertAtBegin(data)
	{
		let newNode = new Node(data);
		newNode.next = this.head;
		this.head = newNode;
	}
	insertAtEnd(data)
	{
		let newNode = new Node(data);
		if(this.head == null)
		{
			this.head = newNode;
			return;
		}
		let temp = this.head;
		while(temp.next != null)
		{
			temp = temp.next;
		}
		temp.next = newNode;
	}
	insertAtPosition(position, data) {
       let newNode=new Node(data); 
       if(position==1){
           newNode.next=this.head; 
           this.head=newNode; 
           return; 
       }
       
       let current=this.head; 
       for(let i=1;i<position-1;i++){
           if(current==null){
               console.log("Invalid Position");
               return; 
           }
           current=current.next; 
       }
       
       if(current==null){
           console.log("Invalid Position");
           return; 
       }
       
       newNode.next=current.next; 
       current.next=newNode; 
	}
	deleteAtBegin()
	{
		if(this.head == null)
		{
			console.log("List is empty");
			return;
		}
		this.head = this.head.next;
	}
	deleteAtPosition(position)
	{
		if(this.head == null)
		{
			console.log("List is empty");
			return;
		}
		if(position == 1)
		{
			this.head = this.head.next;
			return;
		}
		let temp = this.head;
		for(let i=1; i<position-1; i++)
		{
			if(temp == null)
			{
				console.log("Invalid position");
				return;
			}
			temp = temp.next;
		}
		if(temp == null || temp.next == null)
		{
			console.log("Invalid position");
			return;
		}
		temp.next = temp.next.next;
	}
	deleteAtEnd()
	{
		if(this.head == null)
		{
			console.log("List is empty");
			return;
		}
		let temp = this.head;
		while(temp.next.next != null)
		{
			temp = temp.next;
		}
		temp.next = null;
	}
}

function printList()
{
	var nde = list.head;
	while(nde != null)
	{
        process.stdout.write(nde.data + " ");
		nde = nde.next;
	}
}

let list = new LinkedList();

list.insertAtEnd(10);
list.insertAtEnd(15);
list.insertAtEnd(20);
list.insertAtEnd(25);

list.insertAtBegin(5);
process.stdout.write('Them element 5 vao dau linked list: ');
printList();
console.log();
list.deleteAtBegin();

list.insertAtPosition(3,5);
process.stdout.write('Them element 5 vao vi tri thu 3 trong linked list: ');
printList();
console.log();
list.deleteAtPosition(3);

list.insertAtEnd(5);
process.stdout.write('Them element 5 vao cuoi linked list: ');
printList();
console.log();
list.deleteAtEnd();

console.log();
list.insertAtBegin(5);
printList();
console.log();

list.deleteAtBegin();
process.stdout.write('Xoa element dau tien cua linked list: ');
printList();
console.log();
list.insertAtBegin(5);

list.deleteAtPosition(3);
process.stdout.write('Xoa element thu ba cua linked list: ');
printList();
console.log();
list.insertAtPosition(3,15);


list.deleteAtEnd();
process.stdout.write('Xoa element cuoi cung cua linked list: ');
printList();
console.log();








