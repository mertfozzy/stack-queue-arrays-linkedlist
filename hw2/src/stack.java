import java.util.NoSuchElementException;

public class stack<Item> {
    private int size;
    private Node first;
    private class Node{
        private Item item;
        private Node next;
    }

    public stack(){
        first = null;
        size = 0;
    }

    public int size(){
        return size;
    }

    public boolean isEmpty(){ //is empty?
        return first == null;
    }

    public void push(Item item){ //push
        Node oldfirst = first;
        first = new Node();
        first.item = item;
        first.next = oldfirst;
        size++;
    }

    public Item pop(){ //pop
        Item item = first.item; //firstü bozacağımız için item'a attık
        first = first.next;
        size--;
        return item;
    }

    public Item peek(){
        if (isEmpty()) throw new NoSuchElementException("Stack boş.");
        return first.item;
    }
}
