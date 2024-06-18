/*
  Lists implemented with links 
  ------------------------------------

  Example programs by Viviana Bono
  7.2.99
*/

public class LinkedListX

  { public static void main(String[] args)
   { LinkedList l = new LinkedList();

    l.cons('a');
    l.print();
    System.out.println("\n");
    l.cons('b');
    l.print();
    System.out.println("\n");
    l.cons('c');
    l.print();
    System.out.println("\n");
    l.insert('d',2);
    l.print();
    System.out.println("\n");
    l.insert('e',1);
    l.print();
    System.out.println("\n"+l.insert('f',10)+"\n");
    l.print();
    System.out.println("\n");
    l.delete(4);
    l.print();
    System.out.println("\n");
    System.out.println("\n"+l.retrieve(1));
    System.out.println("\n"+l.retrieve(2));
    System.out.println("\n"+l.retrieve(10));
    System.out.println("\n"+l.length());
    System.out.println("\n");

    System.out.println(l.insert_before1('v','c')+"\n");
    l.print();
    System.out.println("\n");

    System.out.println(l.insert_before1('v','d')+"\n");
    l.print();
    System.out.println("\n");

    System.out.println(l.insert_before1('v','z')+"\n");
    l.print();
    System.out.println("\n");

    System.out.println(l.insert_before2('u','v')+"\n");
    l.print();
    System.out.println("\n");
    
    System.out.println(l.insert_before2('u','d')+"\n");
    l.print();
    System.out.println("\n");

    System.out.println(l.insert_before1('u','z')+"\n");
    l.print();
    System.out.println("\n");
    
    System.out.println(l.retrievenode('e')+"\n");
    System.out.println("\n");
    System.out.println(l.retrievenode('q')+"\n");
    System.out.println("\n");
    System.out.println(l.retrievenode('u')+"\n");
    System.out.println("\n");

  }
}

  

class LinkedList

// Node is an inner class.  It is meant to be used only as 
// to instantiate the building blocks to create lists by 
// LinkedList class

{ private class Node 
  { char item;
    Node next;

    Node(char c, Node ptr) { item = c; next = ptr;}

// The following method is not needed for the basic
// operations we gave the first week, but it is
// the support for the method 'retrievenode' of LinkedList class.
// Actually, it is this method that does all the recursive
// work, i.e., it scans recursively the list.

   public boolean retrieve_c(char ch)
    { if (item == ch) return true;
      else
       if (next == null) return false;
       else
       return next.retrieve_c(ch);
    }

  }

  private Node first;
 
// ---------- CONSTRUCTOR ----------

 LinkedList() { first = null;}
  
// ---------- CONS ----------

 public void cons(char newitem)
  { first = new Node(newitem, first);}

// ----------  INSERT ----------

public boolean insert(char c, int index)
{ if (index < 0) return false;
  if (index == 0) {first = new Node(c, first); return true;}
  Node p;
  int i;
  p = first; i = 0;
  while (i < index-1)
      // finding the right node where to insert new item
  { p = p.next;
    if (p == null) return false;
      // breaking out from the loop if at
      // the end of the list
    i++;
  }
  p.next = new Node(c, p.next);
  return true;
}

// ----------  DELETE ----------

 public boolean delete(int index)
{ if (first == null || index < 0) return false;
  if (index == 0) {first = first.next; return true;}
      // to delete the 0-element
  Node p;
  int i;
  p = first; i = 0;
  while (i <= index-1)
      // finding the right node to delete
  { p = p.next;
    if (p == null) return false;
      // breaking out from the loop if at
      // the end of the list
    i++;
  }
  p.next = (p.next).next;
  return true;
} 
  
// ----------  RETRIEVE ----------
// I decided to return 'z' if for some
// reasons retrieve fails, but it would
// be much better to rise the appropriate
// exception (as we did for ArrayList,
// try to think which is the right
// exception to rise, use the Java books)

public char retrieve(int index)
{ if (first == null || index < 0) return 'z';
  Node p;
  int i;
  p = first; i = 0;
  while (i < index)
      // finding the right node
  { p = p.next;
    if (p == null) return 'z';
      // breaking out from the loop if at
      // the end of the list
    i++;
  }
  return p.item;
}


// ---------- LENGTH ----------

public int length()
    { if (first == null) return 0;
      Node p;
      int i;
      p = first;
      i = 0;
      while (p != null)
         { i = i+1;
           p = p.next;
         }
      return i;
    }

// ---------- INSERT_BEFORE with two pointers ----------

 public boolean insert_before1(char item1, char item2 )
    { if (first == null) return false;
      if (first.item == item2)
       { first = new Node(item1, first);
         return true;}
      Node curr;
      Node prev;
      curr = first.next;
      prev = first;
      while (curr != null)
       { if (curr.item == item2)
          { prev.next = new Node(item1, curr);
            return true;}
         else
          { prev = curr; curr = curr.next;}
        }
        return false;
    }


// ---------- INSERT_BEFORE with one pointer ----------

public boolean insert_before2(char item1, char item2)
    { if (first == null) return false;
      if (first.item == item2)
       { first = new Node(item1, first);
         return true;}
      Node p;
      p = first;
      while (p.next != null)
       { if (p.next.item == item2)
          { p.next = new Node(item1, p.next);
            return true;}
         else p = p.next;
        }
        return false;
    }

// ---------- RETRIEVENODE (recursive) ----------
// this method returns true if ch is in the list,
// false, otherwise (it is one of the examples
// we saw to study recursion and it uses the
// 'retrieve_c' recursive method of Node class).

 public boolean retrievenode(char ch)
   { if (first == null) return false;
     else return first.retrieve_c(ch);
   }


// ---------- Print ----------

  public void print()
    { if (first == null)
        System.out.println("Empty List"+"\n");
      Node aux;
      aux = first;
      while (aux != null)
       { System.out.println(aux.item+",");
         aux = aux.next; 
       }
    }
}
