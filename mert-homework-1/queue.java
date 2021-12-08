public class queue {
    int[] arr;
    int capacity, first, last, currentSize;

    queue(int capacity){
        this.capacity = capacity;
        arr = new int[capacity];
        first = 0;
        last = -1;
        currentSize = 0;
    }

    boolean isEmpty(){
        return currentSize==0; //boşsa true döndür
    }
    boolean isFull(){
        return currentSize==capacity; //doluysa false döndür
    }

    void enqueue(int element){
        if (isFull()){
            System.out.println("..overflow..");
        }
        else{
            last+=1;
            arr[last] = element;
            currentSize++;
            System.out.println(last + "-" + element + "..ekleniyor");
        }
    }

    void dequeue(){
        if (isEmpty()){
            System.out.println("..underflow..");
        }
        else{
            System.out.println(first + "-" + arr[first] + "..çıkarıldı");
            first += 1;
            currentSize--;
        }
    }
}