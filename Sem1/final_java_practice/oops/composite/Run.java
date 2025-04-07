package composite;

public class Run {
    public static void main(String[] args) {
        Folder root = new Folder("Root");
        File src = new File("src");
        File main = new File("main");
        root.add(src);
        root.add(main);

        Folder controllers = new Folder("controllers");
        File login = new File("login");
        File register = new File("register");
        controllers.add(login);
        controllers.add(register);
        root.add(controllers);

        Folder views = new Folder("views");
        File home = new File("home");
        File dashboard = new File("dashboard");
        views.add(home);
        views.add(dashboard);
        root.add(views);

        Folder models = new Folder("models");
        File user = new File("user");
        File product = new File("product");
        models.add(user);
        models.add(product);
        root.add(models);
        root.printlist();
    }
}
