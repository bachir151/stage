package Tp3;

public class Maillon<E> {
	private E e ;
	private Maillon next;

   public Maillon(E e, Maillon next) {
   this.e = e;
   this.next = next;
   }
    
    E getObject() { return e; }
    Maillon getNext() { return next; }

	

}
