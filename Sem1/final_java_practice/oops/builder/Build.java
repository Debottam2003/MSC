package builder;

public class Build {
    private String username;
    private String password;
    private Build(Builder build){
        this.username = build.username;
        this.password = build.password;
    }
    public String toString(){
        return "Username: " + this.username + " " + "Password: " + this.password; 
    }
    public static class Builder{
        private String username;
        private String password;
        public Builder setUsername(String username){
            this.username = username;
            return this;
        }
        public Builder setPassword(String password){
            this.password = password;
            return this;
        }
        public Build objectBuild(){
            return new Build(this);
        }
    }
}
