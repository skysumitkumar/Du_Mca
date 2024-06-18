class Array <T>
    {
        private T[] data;

        public Array(int length)
        {
            @SuppressWarnings("unchecked")
            T[] data = (T[]) new Object[length];
            this.data = data;
        }

        public int length()
        {
            return data.length;
        }
        public void resize(int newlen)
        {
            @SuppressWarnings("unchecked")
            T[] newarr = (T[]) new Object[newlen];
            System.arraycopy(data, data.length, newarr, 0, newarr.length);
            data = newarr;
        }
        public Array<T> set(int index, T value)
        {
            try
            {
                data[index] = value;
                return this;
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                throw e;
            }
        }
        public T at(int index)
        {
            try
            {
                return data[index];
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                throw e;
            }
        }
    }


public class Program5
{
    public static void main(String[] args)
    {
        try
        {
            Array<Integer> arr = new Array<Integer>(5);
            // arr.resize(15);
            for(int i=0; i<10; ++i)
                System.out.println("arr[" + i + "] = " + arr.at(i));
        }
        catch(IndexOutOfBoundsException e)
        {
            System.err.println(Program5.class.getSimpleName() + ": access error: " + e);
        }
        catch(Exception e)
        {
            System.err.println(Program5.class.getSimpleName() + ": error: " + e);
            e.printStackTrace(System.err);
        }
    }
}