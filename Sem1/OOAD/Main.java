public class Main {
    public static void main(String[] args) {
        //Father father = new Father("Goutam Kar");
        //System.out.println(father);
        //father.run();
        Son son = new Son("Debottam Kar");
        System.out.println(son);
        son.run();
        Gen<Integer> g1 = new Gen<Integer>(11);
        System.out.println(g1);
        g1.run();
        Gen<String> g2 = new Gen<String>("Okudera");
        System.out.println(g2);
        g2.run();
    }
}
