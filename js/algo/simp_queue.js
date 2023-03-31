class Queue
{
    constructor()
    {
        this.item = [];
        this.frontIndex = 0;
        this.beckIndex = 0;
    }
    size(size)
    {
        this.size = size;
    }
    // enqueue element to queue
    enqueue(element)
    {
        this.item.push(element);

        // this.item[this.backIndex] = element;
        // this.backIndex++;
        // return this.item;

    }
    // dequeue element from queue
    dequeue()
    {
        if(this.item.length == 0)
        {
            return "Underflow";
        }
        return this.item.shift();
    }
    peek(i)
    {
        if(this.item.length == 0)
        {
            return "Underflow";
        }
        return this.item[i-1];
    }
    isFull()
    {
        return this.item.length == this.size;
    }
    isEmpty()
    {
        return this.item.length == 0;
    }
    count()
    {
        return this.item.length;
    }
    printQueue()
    {
        let str = "";
        for(let i = 0; i < this.item.length; i++)
        {
            str += this.item[i] + " ";
        }
        return str;
    }
}

let queue = new Queue();

// size of queue is 5
queue.size(5);

queue.enqueue(21);
queue.enqueue(22);
// queue.enqueue(23);
queue.enqueue(24);
queue.enqueue(25);

console.log(queue.isFull());
console.log(queue.printQueue());

console.log(queue.dequeue());
console.log(queue.dequeue());

console.log(queue.isFull());
console.log(queue.printQueue());


