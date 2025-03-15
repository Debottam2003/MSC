public class Build {
    private String user;
    private String host;
    private String password;
    private int port;
    public Build(){
        // this.user = "";
        // this.host = "";
        // this.password = "";
        // this.port = 0;
    }
    // public Build(String user, String host, String password, int port){
    //     this.host = user;
    //     this.user = host;
    //     this.password = password;
    //     this.port = port;
    // }
    public void setUser(String user){
        this.user = user;
    }
    public void setHost(String host){
        this.host = host; 
    }
    public void setPassword(String password){
        this.password = password;
    }
    public void setPort(int port){
        this.port = port;
    }
    public Build obj(){
        return this;
    }
    public String toString(){
        return this.user + "\n" + this.host + "\n" + this.password + "\n" + this.port;
    }
}
