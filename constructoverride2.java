class login
{
    public login(String uname,String pwd)
    {
        if(uname=="Rohan"&&pwd=="1234")
        {
            System.out.println("Login Sucessful..");
        }
        else
        {
            System.out.println("Enter Valid Credentials.");
        }
    }
}
class app extends login
{
    public app(String name,String pass)
    {

    }
}
class constructoverride2
{
    public static void main(String args[])
    {
        app a1=new app("Rohan","1234");
    }
}