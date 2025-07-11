import java.util.*;
import java.io.*;
class Pair
{
    int x;
    int y;
    Pair(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    //@Override
    // public boolean equals(Object obj) {
    //     if (this == obj) {
    //         return true;
    //     }
    //     if (obj == null || getClass() != obj.getClass()) {
    //         return false;
    //     }
    //     Pair pair = (Pair) obj;
    //     return x == pair.x && y == pair.y;
    // }
    // public int hashCode() {
    //     return Objects.hash(x, y);
    // }
}
public class index
{   
   
    public static void main(String a[])
    {
        // int[] arr=new int[size];
        // int[][] arr1=new int[row][col];
        // sort array
        // Arrays.sort(arr);
        //Arrays.sort(arr1,(a,b)->a[0]-b[0]);
        
        // ArrayList<Integer> arr=new ArrayList<>();
        // Give size to ArrayList
        // ArrayList<integer> arr=new ArrayList<>(size);
        // fill all index of ArrayList with 0
        // Collections.fill(arr,0);  //it throw error some time
        // Do both things at one time
        // ArrayList<Integer> arr=new ArrayList<>(Collections.nCopies(size,0)); //this is best way
        // arr.add();
        // arr.set(index,element); //replace particular index element with some other element
        // arr.add(0,5); //add 5 to oth position now array size increase by 1
        // arr.get(index);
        // arr.size(); //find size of arr
        // arr.remove(index);
        // //sort in desending order
        // Collections.sort(arr,(c,b)->b-c);

        // // pair ArrayList
        // ArrayList<Pair> arr=new ArrayList<>();
        // arr.add(new Pair(5,6));
        // int y=arr.get(0).x;
        // int z=arr.get(0).y;
        // //sort in desending order
        // Collections.sort(arr,(p1,p2)->p2.y-p1.y);
        // //here we make new object and replace old one
        // arr.set(0,new Pair(8,9));
        // //here we change just value of current value;
        // arr.get(0).x=9;
        //arr.size();

        // //dequeue
        // LinkedList<Integer> ls=new LinkedList<>();
        // ls.add(5);
        // ls.addLast(5);
        // ls.addFirst(4);
        // ls.remove(index);
        // //remove last
        // ls.remove();
        // ls.removeLast();
        // ls.removeFirst();
        // ls.getFirst();
        // ls.getLast();
        // ls.size();

        // //pair of dequeue
        // //dequeue
        // LinkedList<Pair> ls=new LinkedList<>();
        // ls.add(new Pair(8,5));
        // ls.addLast(new Pair(8,5));
        // ls.addFirst(new Pair(8,5));
        // ls.remove(9);
        // //remove last
        // ls.remove();
        // ls.removeLast();
        // ls.removeFirst();
        // ls.isEmpty();

        // //stack
        // Stack<Integer>st =new Stack<>();
        // st.push(5);
        // st.pop();
        // st.peek();
        // st.isEmpty();
        // st.size();

        // //stack of pair
        // Stack<Pair>st =new Stack<>();
        // st.push(new Pair(8,5));
        // st.pop();
        // st.peek();
        // st.isEmpty();
        // st.size();

        // //Map
        // Map<Integer,String> m=new HashMap<>();
        // Or
        // HashMap<Integer,String>m2=new HashMap<>();
        //HashMap<Character,Integer>m3=new HashMap<>();
        // Map<Integer,Integer> m1=new HashMap<>();
        // m1.put(4,5);
        // m.put(4,"sumit");
        // //if not find it return null
        // m.get(4);
        // m.remove(4);
        // m.put(4,"Ankit");
        // m.put(4,m.getOrDefault(4,0)+1);
        // m3.put(s.charAt(j),m.getOrDefault(s.charAt(j),0)+1);
        // m1.size();

        // //Map of pair
        // Map<Pair,Integer> m=new HashMap<>();
        // Pair p=new Pair(6,7);
        // m.put(p,5);
        // //if not find it return null
        // System.out.println(m.get(p));
        // //m.remove(new Pair(3,4));

        // //Set Hashing here
        // Set<Integer> s=new HashSet<>();
        // s.add(6);
        // s.contains(6);
        // s.remove(6);

        // //Set Hashing here
        // Set<Pair> s=new HashSet<>();
        // Pair p=new Pair(5,6);
        // s.add(p);
        // System.out.println(s.contains(p));
        // s.remove(p);
        // System.out.println(s.contains(p));

        // for(Pair m:s)
        // {
        //     System.out.println(m.x);
        // }


        // //Set sorted
        // Set<Integer>s=new TreeSet<>((e1,e2)->e2-e1);

        // //Set pair sorted
        // Set<Pair>s=new TreeSet<>((e1,e2)->e2.y-e1.y);

        // //Priority queue by default minHeap
        // PriorityQueue<Integer> p=new PriorityQueue<>();
        // p.add(4);
        // p.add(2);
        or
        //p.offer(2);
        //p.peek(); // top element not remove
        //p.poll(); // top element also remove top element
        //System.out.println(p.contains(5));
        //p.clear();
        // System.out.println(p.peek());
        // p.remove();
        // System.out.println(p.peek());
        // p.size();

        // //Priority queue by maxHeap
        // PriorityQueue<Integer> p=new PriorityQueue<>((p1,p2)->p2-p1); //if we write second-first it give us in decending order

        // //Priority queue by maxHeap Pair
        // PriorityQueue<Pair> p=new PriorityQueue<>((p1,p2)->p2.y-p1.y);

        // //String
        // String s=new String("sumit kumar");
        // s.charAt(4);
        // s.length();
        // s.substring(4,5);
        // s.length();

        // //String array
        // String [] ans=new String[n];
        // ans[0]="Sumit";
        // s[0].charAt(5)=='Q';

        // //StringBuilder
        // StringBuilder s=new StringBuilder("sumit kumar");
        // s.setCharAt(3,'l');

        // StringBuffer
        StringBuffer sb=new StringBuffer("sumit kumar");
        sb.append("World");
        sb.insert(5,"Java");
        sb.replace(0,5,"Hi");  // Replaces characters from index 0 to 4 with "Hi"
        sb.delete(0,3);  // Deletes characters from index 0 to 2
        sb.deleteCharAt(5);  // Deletes the character at index 5
        sb.reverse();  // Reverses the string
        int capacity = sb.capacity();  // Get the current capacity
        int length = sb.length();  // Get the length
        char ch = sb.charAt(5);  // Get the character at index 5
        sb.setCharAt(5,'Z');  // Set the character at index 5 to 'Z'
        String sub1=sb.substring(5);      // Substring from index 5 to the end
        String sub2=sb.substring(0, 5);   // Substring from index 0 to 4
        int index1=sb.indexOf("Java");       // First occurrence of "Java"
        int index2=sb.indexOf("Java", 5);    // First occurrence of "Java" starting from index 5
        String str=sb.toString();  // Converts to a String
        int capacity=sb.capacity();        // Get the current capacity
        sb.ensureCapacity(50);               // Ensure the capacity is at least 50
        sb.trimToSize();                     // Reduce capacity to the current string length
        sb.setLength(0);                    //to clear the length
        int size=sb.length();

        //swap to index 
        char temp=s.charAt(i);
        s.setCharAt(i,s.charAt(index));
        s.setCharAt(index,temp);
        
    }
}
