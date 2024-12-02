/**
 * This class will create any arbitrary polynomial to work with. It uses linked link to 
 * store the terms of the polynomial.
 *  
 * @author Sunirmal Khatua
 *
 */
public class Polynomial {
    // ********** attributes ********************
	private Node head;
	private int degree;
	
    /*
     * Default constructor
     */
    public Polynomial() {
    	//TO BE IMPLEMENTED
        this.head = null;
        this.degree = 0;
    }
    
    /*
     * Parameterized constructor
     */
    public Polynomial(double[] coeff) {           
    	//TO BE IMPLEMENTED
        for(int i = 0; i < coeff.length; i++){
            insertSorted(coeff[i], i);
        }
        this.degree = coeff.length - 1;
    }
    
    /*
     * This is a utility method that can be used to insert a term in sorted order
     * in the current polynomial 
     */
    private void insertSorted(double coeff, int power) {   	
    	if(head==null) {
    		head = new Node(new Terms(coeff, power), null);
    	}else {
	    	Node curr = head.next;
	    	Node prev = head;
	    	while(curr != null && curr.term.power<power) {
	    		prev = curr;
	    		curr = curr.next;
	    	}
	    	if(curr!=null && curr.term.power == power) 
	    		curr.term.coeff += coeff;
	    	else
	    		prev.next = new Node(new Terms(coeff, power), curr);
    	}
    }
    
    /*
     *  subtract a polynomial q from the given polynomial p i.e.  p = p-q
     */
    public void subtract(Polynomial p) {
    	//TO BE IMPLEMENTED
    }
    
    /*
     * returns value of p(x)
     */
    public double evaluate(double x) {
        double res = 0.0;
        Node temp = this.head;
        while (temp != null) {
            res += temp.term.coeff * (Math.pow(x,temp.term.power));
            temp = temp.next;
        }
    	return res;
    }
    
    /*
     *  add a polynomial q to the given polynomial p i.e. p = p+q
     */
    public void add(Polynomial p) {
    	degree = Math.max(degree, p.degree); 
    	head = sum(this, p).head;
    }
    
     /*
      *  multiply the given polynomial by a polynomial q i.e.  p = p*q
      */
    public void multiply(Polynomial q) {
    	     degree = this.degree+q.degree;
    	     head = product(this, q).head;
    	     
    }
    
     /*
      *  multiply the given polynomial by a constant a  i.e   p = a.p
      */
    public void scale(double a) {
    	//TO BE IMPLEMENTED
        Node temp = this.head;
        while (temp != null) {
            temp.term.coeff = temp.term.coeff * a;
            temp = temp.next;
        }
    }
    
    /*
     * prints a polynomial object
     */
    public String toString() {
            Node curr = head;
            String q = "";
            if(curr!=null) {
            	if(curr.term.power == 1)
            		q=curr.term.coeff + "x";
            	else if (curr.term.power == 0)
            		q = ""+curr.term.coeff;
            	else
            		q=curr.term.coeff + "x^" + curr.term.power;
            	curr = curr.next;
            }
            while(curr != null) {
            	if(curr.term.power == 1)
            		q=curr.term.coeff + "x"+"+"+q;
            	else
            		q = curr.term.coeff + "x^" + curr.term.power+"+"+q; 
            	curr = curr.next;
            } 
            return q;
    }
    
    /*
     * multiplies 2 polynomials  and creates a new polynomial 
     * without destroying the original i.e. r = p*q
     */
    public static Polynomial product(Polynomial p, Polynomial q) {
    	Polynomial temp = new Polynomial();
    	//TO BE IMPLEMENTED
        double coeff = 0.0;
        int power = p.head.term.power;
        Node a = p.head;
        Node b = q.head;
        Node c = temp.head;
        while(a != null){
            while(b != null){
            if(temp.head == null){
              c = new Node(new Terms(coeff, power), null);
              temp.head = c;
            }
            else{
                Node prev = temp.head;
                while(prev.next != null){
                    prev = prev.next;
                }
                c = new Node(new Terms(coeff, power), null);
                prev.next = c;
            }
            c.term.coeff = a.term.coeff * b.term.coeff;
            c.term.power = a.term.power + b.term.power;
            b = b.next;
        }
        b = q.head;
        a = a.next;
    }
        temp.degree = p.degree;
        return temp;
    }
    
    /*
     *  adds 2 polynomials  and creates a new polynomial without destroying 
     *  the original i.e.  r = p+q
     */
    public static Polynomial sum(Polynomial p, Polynomial q) {
    	Polynomial temp = new Polynomial();
    	//TO BE IMPLEMENTED
        double coeff = 0.0;
        int power = p.head.term.power;
        Node a = p.head;
        Node b = q.head;
        Node c = temp.head;
        while(a != null && b != null){
            if(temp.head == null){
              c = new Node(new Terms(coeff, power), null);
              temp.head = c;
            }
            else{
                Node prev = temp.head;
                while(prev.next != null){
                    prev = prev.next;
                }
                c = new Node(new Terms(coeff, power), null);
                prev.next = c;
            }
            c.term.coeff = a.term.coeff + b.term.coeff;
            c.term.power = a.term.power;
            a = a.next;
            b = b.next;
        }
        temp.degree = p.degree;
        return temp;
    }
    
    /*
     *  subtracts 2 polynomials  and creates a new polynomial without destroying 
     *  the originals  i.e. r = p-q
     */
    public static Polynomial diff(Polynomial p, Polynomial q) {
    	Polynomial temp = new Polynomial();
    	//TO BE IMPLEMENTED
        double coeff = 0.0;
        int power = p.head.term.power;
        Node a = p.head;
        Node b = q.head;
        Node c = temp.head;
        while(a != null && b != null){
            if(temp.head == null){
              c = new Node(new Terms(coeff, power), null);
              temp.head = c;
            }
            else{
                Node prev = temp.head;
                while(prev.next != null){
                    prev = prev.next;
                }
                c = new Node(new Terms(coeff, power), null);
                prev.next = c;
            }
            c.term.coeff = a.term.coeff - b.term.coeff;
            c.term.power = a.term.power;
            a = a.next;
            b = b.next;
        }
        temp.degree = p.degree;
        return temp;
    }
    

}
