public class yedek {

    public static void main(String[] args){

        stack stack = new stack(7); //call stack
        queue queue = new queue(7); //call queue

        //PUSH STACK
        System.out.println("===========PUSH=========");

        //stack.push(25);
        stack.push(12);
        stack.push(36);
        stack.push(42);
        stack.push(78);
        stack.push(97);
        stack.push(32);

        //POP STACK
        System.out.println("============POP=========");

        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
        System.out.println( stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");

        //ENQUEUE QUEUE
        System.out.println("==========ENQUEUE=========");

        queue.enqueue(25);
        queue.enqueue(96);
        queue.enqueue(42);
        queue.enqueue(76);
        queue.enqueue(29);
        queue.enqueue(12);
        queue.enqueue(37);

        //DEQUEUE QUEUE
        System.out.println("==========DEQUEUE=========");

        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();

    }

}