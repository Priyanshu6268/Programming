public class EXP7TortoiseHare {
    public static void main(String[] args)     
    {          
         Thread tortoise = new Tortoise();              
        tortoise.start();                              
        for(int a=1;a<21;a++)            
        {              
            System.out.println("Distance by Hare :: "+(a));             
         }    
         System.out.println("----------------HARE WILL NOW GO TO SLEEP");
             try   
              {      Thread.sleep(3000);                   
                        }    catch(InterruptedException ie)    
                        {       

                        }    
                        System.out.println("-----------------HARE STARTED THE RACE AGAIN---------------");              
                         for(int b=21;b<40;b++)     
                          System.out.println("Distance by Hare ::  "+(b));    
                          System.out.println("-----------------THE RACE HAS BEEN COMPLETED BY HARE ------------------");  }}
                          class Tortoise extends Thread

{

    public void run()    {               
         for(int c=1;c<41;c++)               
          {                
              System.out.println("Distance by tortoise :: "+c);    
                            }              
                              System.out.println("---------------THE RACE HAS BEEN WON BY TORTOICE ------------");      
                              }}