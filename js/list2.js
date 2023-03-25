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
    insertBefore(value1, data)
    {
        if(this.head == null)
		{
			console.log("List is empty");
			return;
		}
        let newNode = new Node(data);
        
        let temp = this.head;
        while(temp.next != null)
        {
            if(temp.next.data == value1)
            {
                let index = temp.next;
                temp.next = newNode;
                newNode.next = index;
                return;
            }
            temp = temp.next;
        }


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
    deleteValue(value)
    {
        if(this.head == null)
        {
            console.log("List is empty");
            return;
        }
        if(this.head.data == value)
        {
            this.head = this.head.next;
            return;
        }
        let temp = this.head;
        while(temp.next != null)
        {
            if(temp.next.data == value)
            {
                temp.next = temp.next.next;
                return;
            }
            temp = temp.next;
        }
        console.log("Value not found");
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

list.insertAtEnd(8);
list.insertAtEnd(2);
list.insertAtEnd(3);
list.insertAtEnd(1);
list.insertAtEnd(7);
printList();
console.log();

list.insertAtBegin(10);
process.stdout.write('Them element 10 vao dau linked list: ');
printList();
console.log();

list.insertAtEnd(10);
process.stdout.write('Them element 10 vao cuoi linked list: ');
printList();
console.log();



list.deleteValue(8);
process.stdout.write('Xoa element 8: ');
printList();
console.log();

list.deleteValue(7);
process.stdout.write('Xoa element 7: ');
printList();
console.log();

list.deleteValue(3);
process.stdout.write('Xoa element 3: ');
printList();
console.log();

list.insertBefore(3,10);
process.stdout.write('Them 10 vao giua 3 va 1: ');
printList();
console.log();







