package Reflection;

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Scanner;

public class Reflection {
    public static void main(String[] args) throws Exception {
        System.out.println("Reflection example");
        Cat cat = new Cat();
        cat.setage(5);
        cat.setcolor("white_brown");
        Field[] catFields = cat.getClass().getDeclaredFields();
        for (Field f : catFields) {
            System.out.println(f.getName());
            if (f.getName().equals("name")) {
                f.setAccessible(true);
                f.set(cat, "golla");
            }
        }
        System.out.println(cat.getname());
        Method[] catMethods = cat.getClass().getDeclaredMethods();
        for (Method m : catMethods) {
            System.out.println(m.getName());
            if (m.getName().equals("setage")) {
                m.invoke(cat, 9);
            }
        }
        System.out.println(cat.getage());
        Scanner sc = new Scanner(System.in);
        String classname = sc.nextLine();
        try {
            Class<?> cls = Class.forName(classname);
            Object obj = cls.getDeclaredConstructor().newInstance();
            Field[] fieldNew = obj.getClass().getDeclaredFields();
            for (Field f : fieldNew) {
                System.out.println(f.getName());
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        sc.close();
    }
}
