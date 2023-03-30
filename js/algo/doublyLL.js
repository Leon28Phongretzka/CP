class Node {
    constructor(data) {
      this.data = data;
      this.next = null;
      this.prev = null;
    }
  }
  
class LinkedList 
{
    constructor(value) 
    {
      this.head = this.tail = null;
      this.length = 1
    }
    // Add a node to the end of the list
    append(data) {
      const node = new Node(data);  
      if (this.head == null) {
        this.head = this.tail = node;  
        this.head.prev = null;  
        this.tail.next = null;  
      } else {
        this.tail.next = node;  
        node.prev = this.tail;  
        this.tail = node;  
        this.tail.next = null;  
      }
      this.length++;
      return this;
    }

    // Add a node to the begin of the list
    prepend(data) {
      const node = new Node(data);  
      if (this.head == null) {
        this.head = this.tail = node;  
        this.head.prev = null;  
        this.tail.next = null;  
      } else {
        this.tail.prev = node;  
        node.next = this.head;  
        this.head = node;  
        this.tail.prev = null;  
      }
      this.length++;
      return this;
    }

    // Get position and insert value to this position
    get(pos) {
      let i = 0, currentNode = this.head;
      while (currentNode) {
        if (i === pos) return currentNode;
        currentNode = currentNode.next;
        i++;
      }
      return null;
    }
    insert(pos, value) {
      const target = this.get(pos), node = new Node(value);
      node.next = target.next;
      const nextNode = target.next;
      nextNode.prev = node;
      node.prev = target;
      target.next = node;
      this.length++;
      return this;
    }
    remove(pos) {
      let counter = 1, currentNode = this.head;
      while (counter != pos) {
        currentNode = currentNode.next;
        counter++;
      }
      const temp = currentNode.next;
      currentNode.next = temp.next;
      const nextNode = temp.next;
      nextNode.prev = currentNode;
      temp.next = null;
      temp.prev = null;
      this.length--;
    }
    // See: https://stackoverflow.com/a/45849918/1762224
    
    // What's this meaning?
    // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/this
    *iterator() {
      let currentNode = this.head;
      while (currentNode) {
        const { data } = currentNode;
        currentNode = currentNode.next;
        yield data;
      }
    }
    [Symbol.iterator]() {
      return this.iterator();
    }
    printNodes() {
      if (this.head == null) {
        console.log('List is empty');
        return;
      }
      console.log(`List nodes: ${[...this].join("-->")}`);
    }

    // Remove value
    remove_value(value)
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
    }
    
  }
  
  const list = new LinkedList()
    .append(5)
    .prepend(12)
    .append(18)
    .append(15)
    .insert(2, 14);
  list.printNodes();
  
list.append(20); process.stdout.write("Add 20 to the end of the list: "); list.printNodes();
list.prepend(20); process.stdout.write("Add 20 to the begin of the list: "); list.printNodes();
list.remove(2); process.stdout.write("Remove value in pos 2: "); list.printNodes();
