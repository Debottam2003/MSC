public class AccessModifier {
    public static String name = "Debottam Kar";// available every where
    private static int age = 22;// available every where in a package and in child classes of packages
    static double cgpa = 8.148;// default (package private) available every where only with in a package
    private static final String password = "okudera2003";// available only with in the class
    public static void main(String[] args) {
        System.out.println(name + " " + age + " " + cgpa + " " + password);
    }
}