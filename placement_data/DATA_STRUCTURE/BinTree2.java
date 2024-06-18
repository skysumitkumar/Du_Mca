/*
  Binary Trees and Binary Search Trees
  ------------------------------------

  Example program by Mathias Kegelmann
  10.2.99
*/

/* 
   I use the McGraw-Hill structure package for reading integers from the 
   console.
   The package is available from http://www.mhhe.com/javastructures
*/

import structure.*;  


public class BinTree2{
  public static void main(String[] args) 
    throws java.io.IOException, BTDelException
    {
      BinTree t = new BinTree();
      ReadStream r = new ReadStream();
      int i;
      
      System.out.print("> "); 
      for(r.skipWhite(); !r.eof(); r.skipWhite()){
	i=r.readInt();
	if(i>0) t.insert(i);
	else if(i<0){
	  try{
	    t.delete(-i);
	  }
	  catch(BTDelException e){
	    System.out.println("Node "+(-i)+" not found!");
	  }
	}
	else break;
	
	System.out.print("Size "+t.size()+": ");
	t.print();
	System.out.print("\n> ");
      }
      System.out.println();
      r.close();
    }
}


class BTDelException extends Exception{
  public BTDelException() { super(); }
}

class BinTree{
  private Node root;

  private class Node{
    int value;
    Node left,right;

    Node(int v){ value=v; }
  }

  private Node do_insert(int v,Node n){
    if(n==null)
      return(new Node(v));
    else{
      if(v<n.value)
	  n.left=do_insert(v,n.left);
	else
          n.right=do_insert(v,n.right);
      return n;
    }
  }

  private int do_size(Node n){
    if(n==null)
      return 0;
    else
      return do_size(n.left)+do_size(n.right)+1;
  }

  private void do_print(Node n){
    System.out.print("(");
    if(n!=null){
      System.out.print(n.value+",");
      do_print(n.left);
      System.out.print(",");
      do_print(n.right);
    }
    System.out.print(")");
  }

  // ---------------------- DELETE --------------------

  private Node do_delete(int v,Node n) throws BTDelException
    {
      if(n==null)
	throw new BTDelException();
      else{
	if(n.value==v){
	  if(n.left==null) return n.right;
	  else if(n.right==null) return n.left;
	  else{
	    n.value=fetch_left(n.right);
	    n.right=del_left(n.right);
	  }
	}
	else if(v<n.value) n.left=do_delete(v,n.left);
	else n.right=do_delete(v,n.right);
      }
      return n;
    }		

  private int fetch_left(Node n){
    while(n.left!=null) n=n.left;
    return n.value;
  }

  private Node del_left(Node n){
    if(n.left!=null){
      n.left=del_left(n.left);
      return n;
    }
    else return n.right;
  }

  // ******************** PUBLIC PART ********************

  public void insert(int v){
    root=do_insert(v,root);
  }

  public void print(){
    do_print(root); 
  }

  public int size(){
    return do_size(root);
  }

  public void delete(int v) throws BTDelException{
    root=do_delete(v,root);
  }
}
