// public class Builder {
//     public static void main(String[] args){
//         System.out.println("...This is the Builder Pattern...");
//         //Build dbConnect = new Build("postgres", "localhost", "okudera2003", 5000);
//         Build dbConnect = new Build();
//         dbConnect.setUser("postgres");
//         dbConnect.setHost("localhost");
//         dbConnect.setPassword("okudera2003");
//         dbConnect.setPort(5000);
//         dbConnect = dbConnect.obj();
//         System.out.println(dbConnect.toString());
//     }
// }

// Product class
class Build {
    private String user;
    private String host;
    private String password;
    private int port;

    // Private constructor to restrict direct instantiation
    private Build(Builder builder) {
        this.user = builder.user;
        this.host = builder.host;
        this.password = builder.password;
        this.port = builder.port;
    }

    @Override
    public String toString() {
        return this.user + "\n" + this.host + "\n" + this.password + "\n" + this.port;
    }

    // Static Builder Class
    public static class Builder {
        private String user;
        private String host;
        private String password;
        private int port;

        public Builder(){
            this.user = "defaultUser";
            this.host = "defaultHost";
            this.password = "defaultPassword";
            this.port = 0000;
        }

        public Builder setUser(String user) {
            this.user = user;
            return this;
        }

        public Builder setHost(String host) {
            this.host = host;
            return this;
        }

        public Builder setPassword(String password) {
            this.password = password;
            return this;
        }

        public Builder setPort(int port) {
            this.port = port;
            return this;
        }

        public Build build() {
            return new Build(this);
        }
    }
}

// Client code
public class BuilderPatternDemo {
    public static void main(String[] args) {
        System.out.println("...This is the Builder Pattern...");

        Build dbConnect = new Build.Builder()
                .setUser("postgres")
                // .setHost("localhost")
                .setPassword("okudera2003")
                .setPort(5000)
                .build();

        System.out.println(dbConnect);
    }
}
