class twoStack
{
    constructor()
    {
        this.stack1 = [];
        this.stack2 = [];
    }

    push1(item)
    {
        this.stack1.push(item);
    }

    push2(item)
    {
        this.stack2.push(item);
    }

    pop1()
    {
        if(this.stack1.length == 0)
        {
            console.log("Stack Underflow");
            return;
        }
        return this.stack1.pop();
    }

    pop2()
    {
        if(this.stack2.length == 0)
        {
            console.log("Stack Underflow");
            return;
        }
        return this.stack2.pop();
    }

    peek1()
    {
        return this.stack1[this.stack1.length - 1];
    }

    peek2()
    {
        return this.stack2[this.stack2.length - 1];
    }

    isEmpty1()
    {
        return this.stack1.length == 0;
    }

    isEmpty2()
    {
        return this.stack2.length == 0;
    }

    change1(element, i)
    {
        this.stack1[i] = element;
    }

    change2(element, i)
    {
        this.stack2[i] = element;
    }

    printStack1()
    {
        let str = "";
        for(let i = 0; i < this.stack1.length; i++)
        {
            str += this.stack1[i] + " ";
        }
        return str;
    }

    printStack2()
    {
        let str = "";
        for(let i = 0; i < this.stack2.length; i++)
        {
            str += this.stack2[i] + " ";
        }
        return str;
    }
}

let stack = new twoStack();
stack.push1(21);
stack.push1(22);
stack.push1(23);
stack.push1(24);
stack.push1(25);

stack.push2(31);
stack.push2(32);
stack.push2(33);
stack.push2(34);
stack.push2(35);

console.log(stack.printStack1());
console.log(stack.printStack2());