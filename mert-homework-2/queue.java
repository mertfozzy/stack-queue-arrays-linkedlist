public class queue<Item> {
    private int size;
    private Node first;
    private Node last;

    private class Node{
        private Item item;
        private Node next;
    }

    public queue(){
        first = null;
        last = null;
        size = 0;
    }

    public boolean isEmpty(){
        return first == null;
    }

    public int size(){
        return size;
    }

    public Item peek(){
        return first.item;
    }

    public void enqueue(Item item){
        Node oldlast = last;
        last = new Node();
        last.item = item;
        last.next = null;
        if (isEmpty()){
            first = last;
        }
        else {
            oldlast.next = last;
        }
        size++;
    }

    public Item dequeue(){
        Item item = first.item;
        first = first.next;
        size--;
        if (isEmpty()){
            last = null;
        }
        return item;
    }

}
