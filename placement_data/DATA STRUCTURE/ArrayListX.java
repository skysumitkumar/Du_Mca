/*
  Lists implemented with arrays 
  ------------------------------------

  Example programs by Viviana Bono
  7.2.99
*/

public class ArrayListX

  { public static void main(String[] args)
   { ArrayList l = new ArrayList();

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
    System.out.println("\n"+l.retrieve_simple(1));
//    System.out.println("\n"+l.retrieve_simple(10));
    System.out.println("\n"+l.retrieve(2));
//    System.out.println("\n"+l.retrieve(10));
    System.out.println("\n"+l.length());

  }
}

  
// ---------- To be used in the 'retrieve' method to check if the
// argument is out of bounds ---------- 

class ListIndexOutOfBounds extends 
   java.lang.ArrayIndexOutOfBoundsException
   { public ListIndexOutOfBounds() {}
   }


class ArrayList
{ private int length, size;   
  private char[] p;
 
// ---------- CONSTRUCTOR ----------

  ArrayList() { size = 2; p = new char[size]; length = 0;} 
  
// ---------- CONS ----------

  public void cons (char newitem)
    { char[] new_p;
      if (length == size)
        { size *= 2;
          new_p = new char[size];
          for (int i = 0; i < length; i++) new_p[i+1] = p[i];
          new_p[0] = newitem;
          p = new_p;
        }
      else
        { for (int i = length; i > 0; i--) p[i] = p[i-1];
          p[0] = newitem;
        }
      length++;
    }

// ----------  INSERT ----------

  public boolean insert (char item, int index)
    { char[] new_p;
      if (index < 0 || index > length) return false;
      if (length == size) 
        { size *= 2;
          new_p = new char[size];
          for (int i = 0; i < index; i++) new_p[i] = p[i];
          new_p[index] = item;
          for (int i = index; i < length; i++) 
             new_p[i+1] = p[i];
          p = new_p;
        }
      else
        { for (int i = length; i > index; i--) p[i] = p[i-1];
          p[index] = item;
        }
      length++;
      return true;
    }

// ----------  DELETE ----------
  
public boolean delete (int index)
    { if (index < 0 || index > length) return false;
      for (int i = index; i < length-1; i++) p[i] = p[i+1];
      length--;
      return true;
    }
  
// ----------  RETRIEVE (without out-of-bounds check) ----------

char retrieve_simple(int index) { return p[index]; }


// ----------  RETRIEVE (with out-of-bounds check) ----------

  char retrieve(int index) throws ListIndexOutOfBounds
    { if (index >= length || index < 0) throw 
         new ListIndexOutOfBounds();
      else return p[index];
    }


// ---------- LENGTH ----------

  public int length()
    { return length;}

// ---------- Print ----------

   public void print()
   { for (int i=0; i<length; i++)
       System.out.print(p[i]+",");
   }
    
// ---------- Print ----------
//
//  static void print(Node N)
//  { if(n!=null)
//     { System.out.print(n.item+",");
//        print(n.next);
//      }
//  }
}
