public class stack {
    int topOfStack;
    int capacity;
    int[] stack;

    stack(int capacity){
        this.capacity = capacity;
        stack = new int[capacity];
        topOfStack = -1;
    }

    void push(int element){
        if (topOfStack==capacity-1){
            System.out.println("..overflow..");
        }
        else
        {
            topOfStack++;
            stack[topOfStack] = element;
            System.out.println(topOfStack + "-" + element + "..ekleniyor");
        }
    }

    int pop(){
        if (topOfStack<0){
            System.out.println("..underflow..");
            return 0;
        }
        else {
            return (stack[topOfStack--]);
        }
    }
}