package com.binarytree;

class Node {
    int id;
    Node left;
    Node right;
    Node parent;
}

class BinaryTree {
    Node root;
    Node[] allNode = new Node[6];

    BinaryTree() {
        root = null;
    }

    Node createNewNode(int id) {
        Node newNode = new Node();
        newNode.id = id;
        newNode.left = newNode.right = newNode.parent = null;
        return newNode;
    }

    public void buildBinaryTree() {

        for (int i = 0; i < 6; i++)
            allNode[i] = createNewNode(i);

        allNode[0].left = allNode[1];
        allNode[0].right = allNode[2];

        allNode[1].left = allNode[5];
        allNode[1].parent = allNode[0];

        allNode[2].left = allNode[3];
        allNode[2].right = allNode[4];
        allNode[2].parent = allNode[0];

        allNode[5].parent = allNode[1];
        allNode[3].parent = allNode[2];
        allNode[4].parent = allNode[2];

        root = allNode[0];
    }

    public void printTreeInfo() {
        for (int i = 0; i < 6; i++) {
            int p = -1;
            int r = -1;
            int l = -1;
            if (allNode[i].parent != null)
                p = allNode[i].parent.id;
            if (allNode[i].left != null)
                l = allNode[i].left.id;
            if (allNode[i].right != null)
                r = allNode[i].right.id;

            System.out.println("Node " + i + ": Parent = " + p + ", left child = " + l + " right child = " + r);

        }
    }
}

public class BinaryTreeMain {
    public static void main(String[] args) {
        BinaryTree binaryTree = new BinaryTree();
        binaryTree.buildBinaryTree();
        binaryTree.printTreeInfo();
    }

}
