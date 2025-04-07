package Generics;

public class Gen<T, U> {
    T password;
    U cgpa;
    public Gen(T password, U cgpa){
        this.password = password;
        this.cgpa = cgpa;
    }
    T getPassword(){
        return this.password;
    }
    U getCgpa(){
        return this.cgpa;
    }
    public String toString(){
        return this.password + " " + this.cgpa;
    }
}
