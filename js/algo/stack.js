class Stack
{
    constructor()
    {
        this.item = [];
    }
    // push element to stack
    push(element)
    {
        this.item.push(element);
    }
    // pop element from stack
    pop()
    {
        if(this.item.length == 0)
        {
            return "Underflow";
        }
        return this.item.pop();
    }
    // top element from stack
    top()
    {
        if(this.item.length == 0)
        {
            return "Underflow";
        }
        return this.item[this.item.length - 1];
    }
    // peek at i position
    peek(i)
    {
        if(this.item.length == 0)
        {
            return "Underflow";
        }
        return this.item[i-1];
    }
    // check stack is empty
    isEmpty()
    {
        return this.item.length == 0;
    }
    // check stack is full
    isFull()
    {
        return this.item.length == this.size;
    }
    // count element in stack
    count()
    {
        return this.item.length;
    }
    // change item at index i 
    change(i, element)
    {
        this.item[i] = element;
    }
    // print stack
    printStack()
    {
        let str = "";
        for(let i = 0; i < this.item.length; i++)
        {
            str += this.item[i] + " ";
        }
        return str;
    }
}

let stack = new Stack();
stack.push(21);
stack.push(22);
// stack.push(23);
stack.push(24);
stack.push(25);

console.log(stack.printStack());

console.log(stack.pop());
console.log(stack.pop());

console.log(stack.top());

console.log(stack.printStack());
console.log(stack.peek(2));
console.log(stack.isEmpty());

