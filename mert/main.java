import java.util.Scanner;

public class main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Uygulamamıza hoşgeldiniz.");
        while (true) {
            System.out.println("Stack için 1'e, Queue için 2'ye basınız : ");
            int secim = scanner.nextInt();
            switch (secim) {
                case 1: //stack
                    System.out.println("Kaç sayı gireceksiniz : ");
                    int capacity = scanner.nextInt(); //capacity of stack

                    stack stack = new stack(capacity);
                    while (true) {
                        System.out.println("Push için 1'e, Pop için 2'ye, bir önceki menü için 3'e basınız : ");
                        int secim2 = scanner.nextInt();
                        if (secim2 == 1) { //push
                            for (int i = 1; i <= capacity; i++) {
                                System.out.println("Sayı giriniz : ");
                                int sayi = scanner.nextInt();
                                stack.push(sayi);
                            }
                            System.out.println("En tepedeki sayı : " + stack.stack[stack.topOfStack]);
                        } else if (secim2 == 2) { //pop
                            if (stack.topOfStack < 0) {
                                System.out.println("Stack'iniz boş.");
                            } else {
                                System.out.println(stack.topOfStack + "-" + stack.pop() + "..çıkarıldı");
                                if (stack.topOfStack < 0) {
                                    System.out.println("Stack boşaldı.");
                                } else {
                                    System.out.println("Şuan en tepedeki sayı : " + stack.stack[stack.topOfStack]);
                                }
                            }
                        } else if (secim2 == 3) { //exit
                            System.out.println("Çıkış yaptınız..");
                            break;
                        } else {
                            System.out.println("Hatalı seçim.");
                        }
                    }
                    break;

                case 2: //queue
                    System.out.println("Kaç sayı gireceksiniz : ");
                    int capacity2 = scanner.nextInt(); //capacity of stack

                    queue queue = new queue(capacity2);
                    while (true) {
                        System.out.println("Enqueue için 1'e, Dequeue için 2'ye, bir önceki menü için 3'e basınız : ");
                        int secim2 = scanner.nextInt();
                        if (secim2 == 1) { //enqueue
                            for (int i = 1; i <= capacity2; i++) {
                                System.out.println("Sayı giriniz : ");
                                int sayi = scanner.nextInt();
                                queue.enqueue(sayi);
                            }
                        } else if (secim2 == 2) { //dequeue
                            if (queue.isEmpty()) {
                                System.out.println("Queue şuan boş.");
                            } else if (queue.isFull()) {
                                if (queue.isEmpty()) {
                                    System.out.println("Queue boşaldı.");
                                } else {
                                    queue.dequeue();
                                }
                            }
                        } else if (secim2 == 3) { //exit
                            System.out.println("Çıkış yaptınız..");
                            break;
                        } else {
                            System.out.println("Hatalı seçim.");
                        }
                    }
                    break;

                default:
                    System.out.println("Hatalı seçim.");
                    break;
            }
        }
    }
}