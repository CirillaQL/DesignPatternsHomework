问题1
class Context {  
//保证一个引用
	  private AbstractStrategy strategy; 
	    public void setStrategy(AbstractStrategy str) {  
	        this.strategy= str;  
	    }  
	    //调用策略类中的算法  
	    public void algorithm() {  
	        strategy.algorithm();  
	    }  
	} 

	abstract class AbstractStrategy {  
		//声明抽象算法
	    public abstract void algorithm();
	} 

	class ConcreteStrategyA extends AbstractStrategy {  
	    //算法的具体实现  
	    public void algorithm() {  
	    System.out.println("重写");  
	    
	    }  
	}  
	class ConcreteStrategyB extends AbstractStrategy {  
	    //算法的具体实现  
	    public void algorithm() {  
	    	System.out.println("重写");  
	    }  
	}  
	class ConcreteStrategyC extends AbstractStrategy {  
	    //算法的具体实现  
	    public void algorithm() {  
	    	System.out.println("重写");  
	    }  
	}  
如果要添加其他算法,继续声明新类继承父类即可

问题2
使用模板方法模式 步骤不同的进行重写 
class Context {  
	  private Algorithm algorithm; 
	  public void setAlgorithm(Algorithm algorithm) {  
	        this.algorithm= algorithm;  
	  }  
	  //调用策略类中的算法  
	  public void algorithm() {  
	  	algorithm.step1();  
	  	algorithm.step2();  
	  	algorithm.step3();  
	  }  
} 

class Algorithm {  
	    public  void step1() {
	    	System.out.println("step1的具体内容");  
	    }
	
	    public  void step2() { 
	    	System.out.println("step2的具体内容");
	    }
		
	    public  void step3() { 
	    	System.out.println("step3的具体内容");
		} 
	    
	class ConcreteAlgorithmA extends Algorithm {  
	    //算法的具体实现  
	    public void step1() {  
	    System.out.println("重写了算法步骤1");//A步骤1有所不同
	    
	    }  
	}  
	class ConcreteAlgorithmB extends Algorithm {  
	    //算法的具体实现  
	    public void step2() {  
	    	System.out.println("重写了算法步骤2"); //B步骤2有所不同
	    }  
	}  
	class ConcreteAlgorithmC extends Algorithm {  
	    //算法的具体实现  
	    public void step3() {  
	    	System.out.println("重写了算法步骤3");//C步骤3有所不同
	    }  
	}  
