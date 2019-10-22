public abstract class Todo
{
	public abstract void exe();
} 

public class A implements Makedish
{
	private Dish dish;
	public A()
	{
		dish = new Dish();
	}
	public void exe()
	{
		dish.DISH1();
	}
}

public class B implements Makedish
{
	private Dish dish;
	public B()
	{
		dish = new Dish();
	}
	public void exe()
	{
		dish.DISH2();
	}
}

public class C implements Makedish
{
	private Dish dish;
	public C()
	{
		dish = new Dish();
	}
	public void exe()
	{
		dish.DISH3();
	}
}

public class Dish
{
	public void DISH1()
	{
		System.out.println("菜1");
	}
	
	public void DISH2()
	{
		System.out.println("菜2");		
	}
	
	public void DISH3()
	{
		System.out.println("菜3");
	}
}

Public class TodoQueue {  
        private ArrayList<Dish> todo = new ArrayList<Dish>();  
    	public void add(Dish Todo) {  todo.add(todo);   }  
    	public void removeTodo(Dish todo) {  todo.remove(todo);  }    
    	public void exe() {  
        	for (Object Todo : todo) {  
            ((Todo)todo).exe();  
        }  
    }  
} 

public class Client {  
    private TodoQueue todoQueue;  
   
public Invoke(TodoQueue todoQueue) 
{ 
 this.todoQueue = todoQueue; 
 }  
   
public void setTodoQueue(TodoQueue todoQueue)
 {  
        this.todoQueue = todoQueue;  
    }       
     public void call() {    todoQueue.exe();     }  
}
