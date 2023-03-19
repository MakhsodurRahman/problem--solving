package com.deque;

class Node{
    int data;
    Node next;
    Node prv;
}
class DeQue {
    Node head;
    Node tail;
    int size;
    DeQue(){
        head = tail = null;
        size = 0;
    }
    //every method work on o(1)
    Node createNewNode(int value){
        Node newNode = new Node();
        newNode.data = value;
        newNode.next = null;
        newNode.prv = null;
        return newNode;
    }

    public void addLast(int value){
        Node newNode = createNewNode(value);
        if(size == 0){
            head = tail = null;
            size++;
            return;
        }
        tail.next = newNode;
        newNode.prv = tail;
        tail = newNode;
        size++;
    }

    public void addFront(int value){
        Node newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }

        head.prv = newNode;
        newNode.next = head;
        head = newNode;
        size++;
    }

    public void removeLast(){
        if(size == 0){
            System.out.println("DeQue is empty");
        }
        if(size == 1){
            head = tail = null;
            size--;
            return;
        }
        tail = tail.prv;
        tail.next = null;
        size--;
    }

    public void removeFirst(){
        if(size == 0){
            System.out.println("DeQue is empty");
        }
        if(size == 1){
            head = tail = null;
            size--;
            return;
        }
        head = head.next;
        head.prv = null;
        size--;
    }

    public int getFirst(){
        if(size == 0){
            System.out.println("DeQue is empty");
        }
        return head.data;
    }
    public int getLast(){
        if(size == 0){
            System.out.println("DeQue is empty");
        }
        return tail.data;
    }
}

public class DeQueMain{
    public static void main(String[] args) {
        DeQue deQue = new DeQue();
        deQue.addFront(44);
        deQue.addFront(77);
        System.out.println(deQue.getFirst());
    }
}
